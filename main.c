#include <stdio.h>

#include "rot.h"

int main(int argc, char *argv[]) {
  // TODO handle command line args

  while (1) {
    char ch = fgetc(stdin);
    if (feof(stdin)) {
      break;
    }
    fputc(rot(ch, 1, 1), stdout);
  }

  return 0;
}