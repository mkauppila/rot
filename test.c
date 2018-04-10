#include <assert.h>
#include <stdio.h>
#include "rot.h"

int main(int argc, char *argv[]) {
  assert(rot('A', 2, CIPHER) == 'C' && "A -> C");
  assert(rot('C', 2, DECIPHER) == 'A' && "C -> A");

  assert(rot('A', 26, CIPHER) == 'A' && "A -> A");
  assert(rot('K', 26, DECIPHER) == 'K' && "K -> K");

  printf("Tests OK\n");

  return 0;
}