#include <stdio.h>

int main(int argc, char *argp[]) {
  printf("Do ROT13 for stdin");
  while (1) {
    char ch = fgetc(stdin);
    if (feof(stdin)) break;
    fputc(ch, stdout);
  }

  return 0;
}