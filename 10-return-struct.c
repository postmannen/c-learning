#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

struct myData {
  char buffer[size];
};

struct myData func() {
  struct myData d;
  // strncpy vs strcpy, strncpy takes an extra argument for the size to copy.
  strncpy(d.buffer, "some data to return", size);
  return d;
};

int main() {
  struct myData d;
  d = func();
  printf("printing: %s\n", d.buffer);
  return 0;
}