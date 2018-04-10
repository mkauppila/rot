#include "rot.h"

char rot(char ch, int rot, mode_t mode) {
  int reverse = mode == DECIPHER;

  if ('A' <= ch && ch <= 'Z') {
    const int base = (int)'A';
    const int alphaCount = ('Z' - 'A') + 1;
    const int shift = reverse ? (alphaCount - rot) : rot;

    return (((ch - base) + shift) % alphaCount) + base;
  } else {
    return ch;
  }
}
