#include <stdio.h>
#include <string.h>
#include "rot.h"


typedef struct {
  mode_t mode;
  int rotations;
  int errored; // failed to parse cmd args
} arguments_t;

arguments_t parseCmdArgs(int argc, char *argv[]) {
  arguments_t args = {
    .mode = CIPHER,
    .rotations = 1,
    .errored = 0,
  };

  if (argc == 2 && strncmp("--usage", argv[1], 7) == 0) {
    fprintf(stdout, "Usage:\n");
    fprintf(stdout, "rot [-c | -d] [-r number] < STDIN > STDOUT\n");
    args.errored = 1;
  }

  if (argc >= 2 && strncmp("-c", argv[1], 2) == 0) {
    args.mode = CIPHER;
  }
  else if (argc >= 2 && strncmp("-d", argv[1], 2) == 0) {
    args.mode = DECIPHER;
  }
  else {
    fprintf(stdout, "Requires -c(ipher) or -d(echipher).\n");
    args.errored = 1;
  }

  if (argc >= 3 && strncmp("-n", argv[2], 2) == 0) {
    if (argc >= 4) {
      sscanf(argv[3], "%d", &args.rotations);
      printf("%d\n", args.rotations);
    } else {
      fprintf(stdout, "Option -n requires an integer for defining the rotation count.\n");
      args.errored = 1;
    }
  }
  else {
    fprintf(stdout, "Invalid parameter: %s\n", argv[2]);
    args.errored = 1;
  }

  return args;
}

int main(int argc, char *argv[]) {
  arguments_t args = parseCmdArgs(argc, argv);
  if (args.errored) {
    return 1;
  }

  while (1) {
    char ch = fgetc(stdin);
    if (feof(stdin)) {
      break;
    }
    fputc(rot(ch, args.rotations, args.mode), stdout);
  }

  return 0;
}