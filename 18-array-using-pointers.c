#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8;

int main() {
  uint8 array[10];
  printf("the address of array %p\n", &array);
  printf("size of array; %lu\n", sizeof(array));

  // normal for loop working over an array
  int i;
  for (i = 0; i < 10; i++) {
    array[i] = i * 10;
    printf("%d\n", array[i]);
  }

  uint8 *p = array;
  printf("the address of p %p\n", p);

  // void *end;
  for (void *end = &array[10]; p != end; p++) {
    printf("value of p: %d, address of p: %p\n", *p, p);
  }
}