#include "rot.h"

char rot(char ch, int rot, mode_t mode) {
  const char from = ' ';
  const char to = '~';

  if (from <= ch && ch <= to) {
    const int range = (to - from) + 1;
    const int shift = mode == CIPHER ? rot : (range - rot);

    return (((ch - from) + shift) % range) + from;
  } else {
    return ch;
  }
}
