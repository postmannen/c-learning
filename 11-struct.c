#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// anonymous struct, and declaring 2 variables
struct {
  int nr1;
  int nr2;
} var1, var2;

struct numbers {
  int nr1;
  int nr2;
};

int main() {
  var1.nr1 = 10, var1.nr2 = 20;
  printf("%d %d\n", var1.nr1, var1.nr2);
  var2.nr1 = 10, var2.nr2 = 20;
  printf("%d %d\n", var2.nr1, var2.nr2);

  struct numbers n1;
  n1.nr1 = 100, n1.nr2 = 200;
  printf("%d %d\n", n1.nr1, n1.nr2);

  return 0;
}