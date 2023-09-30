#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8;

int main() {
  char *array[] = {"some", "thing", "odd", "is", "happening", "here"};
  char **p = array;

  printf("%s %s\n", p[0], p[1]);
  printf("%s %s\n", *(p + 0), *(p + 1));

  // same as, p[0] = "monkey"
  *(p + 0) = "monkey";
  printf("%s %s\n", *(p + 0), *(p + 1));

  long size = sizeof(array) / sizeof(array[0]);
  printf("size of array: %lu\n", size);

  for (int i = 0; i < size; i++) {
    printf("array content: %s\n", *(p + i));
  }
}