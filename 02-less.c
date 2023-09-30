#include <stdio.h>

int less(int num1, int num2);

int main() { printf("the bool value returned: %d\n", less(300, 200)); }

int less(int num1, int num2) {
  if (num1 < num2) {
    printf("number 1 %d, was less than number 2 %d\n", num1, num2);
    return 0;
  }
  printf("number 1 %d, was larger than number 2 %d\n", num1, num2);
  return 1;
}