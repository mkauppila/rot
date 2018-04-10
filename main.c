#include <stdio.h>
#include <string.h>
#include "rot.h"

void printUsage() {
  fprintf(stdout, "Usage:\n");
  fprintf(stdout, "rot [-cd] < STDIN\n");
}

int main(int argc, char *argv[]) {
  mode_t mode = CIPHER;

  if (argc == 2) {
    if (strncmp("-c", argv[1], 2) == 0) {
      mode = CIPHER;
    } else if (strncmp("-d", argv[1], 2) == 0) {
      mode = DECIPHER;
    } else {
      printUsage();
    }
  } else {
    printUsage();
  }

  while (1) {
    char ch = fgetc(stdin);
    if (feof(stdin)) {
      break;
    }
    fputc(rot(ch, 1, mode), stdout);
  }

  return 0;
}