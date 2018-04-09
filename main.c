#include <stdio.h>

char rot(char ch, int rot, int reverse) {
  if ('A' <= ch && ch <= 'Z') {
    const int base = (int)'A';
    const int alphaCount = ('Z' - 'A') + 1;
    const int shift = reverse ? (alphaCount - rot) : rot;

    return (((ch - base) + shift) % alphaCount) + base;
  } else {
    return ch;
  }
}

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