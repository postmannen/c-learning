#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8;

typedef struct {
  uint8 length;
  uint8 data;
} MyArrayOfBytes1;

typedef struct {
  uint8 length;
  uint8 data[1];
} MyArrayOfBytes2;

int main() {
  int length = 32;

  MyArrayOfBytes1 *array1;
  array1 = malloc(sizeof(*array1));
  array1->length = length;
  array1->data = malloc(sizeof(array1->data) * length);
  printf("%lu\n", sizeof(&array1));

  MyArrayOfBytes2 *array2;
  array2 = malloc((sizeof *array2) + sizeof(uint8) * length - 1);
  array2->length = length;
  printf("%lu\n", sizeof(&array2));

  // pointer to array, and allocate space for it
  uint8 ar[5] = {100, 101, 102, 103, 104};
  uint8 *par;
  par = malloc(sizeof(uint8) * 5);
  par = ar;
  //*par = 100;
  printf("%p, %d\n", par, *par);
  par++;
  printf("%p, %d\n", par, *par);
  // or it can be treated as we do with normal arrays.
  printf("%p, %d\n", par, par[0]);
}