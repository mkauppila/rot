#include <stdio.h>

char rot(char ch, int rot, int reverse) {
  if ('A' <= ch && ch <= 'Z') {
    const int base = (int)'A';
    const int alphaCount = ('Z' - 'A') + 1;
    const int arot = reverse ? (alphaCount - rot) : rot;

    return (((ch - base) + arot) % alphaCount) + base;
  } else {
    return ch;
  }
}

int main(int argc, char *argp[]) {
  while (1) {
    char ch = fgetc(stdin);
    if (feof(stdin)) {
      break;
    }
    fputc(rot(ch, 1, 1), stdout);
  }

  return 0;
}