#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// use typedef to give a name to the struct, and avoid having to
// type the struct word all the time when declaring a variable.
typedef struct {
  int nr1;
} aStruct;

int main() {
  aStruct a;
  a.nr1 = 10;
  printf("%d\n", a.nr1);

  return 0;
}