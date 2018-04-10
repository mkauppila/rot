#ifndef ROT_H
#define ROT_H

typedef enum {
  CIPHER,
  DECIPHER,
} mode_t;

/**
 * ch: character for rotation
 * rot: how much to rotate
 * mode: CIPHER or DECIPHER
 */
char rot(char ch, int rot, mode_t mode);

#endif