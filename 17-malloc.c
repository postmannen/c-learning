#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024

int main() {
  float *a;
  a = (float *)malloc(sizeof(*a) * SIZE);
  if (a == NULL) {
    puts("memory error");
    return (1);
  }
  printf("%lu, %p", sizeof(*a), a);
}
