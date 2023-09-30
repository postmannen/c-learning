#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a_int;
  printf("%lu\n", sizeof(a_int));
  double a_double;
  printf("%lu\n", sizeof(a_double));
  char a_char;
  printf("%lu\n", sizeof(a_char));
}