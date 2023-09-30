#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8;

int main() {
  int arrSize = 10;
  char *arr = (char *)malloc(sizeof(char) * arrSize);

  char *parr = arr;

  int reallocated = 0;
  int i = 0;
  while (1) {
    printf("working on; %p\n", parr);
    *parr = 100;
    parr++;
    i++;

    if (i >= arrSize && reallocated == 0) {
      printf("larger than array, index=%d, expanding with 10\n", i);
      arr = realloc(arr, 10);
      reallocated = 1;
      *parr = *arr * 10;
      arrSize += 10;

    } else if (i >= arrSize && reallocated == 1) {
      break;
    }
  }

  parr = arr;
  i = 0;
  while (i < arrSize) {
    fprintf(stdout, "i=%d, value=%d ", i, *parr);
    parr++;
    i++;
    fprintf(stdout, "apekatt\n");
  }
  free(arr);
}