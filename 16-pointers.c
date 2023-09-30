#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *doSome() {
  // we need to use static if we want to return a pointer value from a function,
  // or else the content will be lost when the function exits since the
  // variables scope is within the function.
  static char localS[64] = "some local string";
  return localS;
}

int main() {
  char *pc;
  printf("%p\n", pc);

  // point to the next byte
  pc++;
  printf("%p\n", pc);
  // --------------------------------------

  int array[] = {100, 101, 102, 103, 104};
  int *aptr;
  aptr = array;

  int length = 5;
  for (int i = 0; i < length; i++) {
    printf("%d\n", *(aptr + i));
  }
  // --------------------------------------

  char *str = "this is a string";
  char *strPtr;
  strPtr = str;

  // since strings end with 0, and 0 is also false, we can use that to
  // loop through the string by dereferencing the pointer.
  while (*strPtr) {
    printf("%c ", *strPtr);
    strPtr++;
  }
  printf("\n");

  // --------------------------------------

  char *someStr = doSome();
  printf("%s\n", someStr);
  // --------------------------------------

  char *strArray[3] = {"string one", "string two", "string three"};
  int lenArray = 3;

  int i;
  for (i = 0; i < lenArray; i++) {
    char *sptr = *(strArray + i);

    while (*sptr) {
      // printf("%c", *sptr);
      putchar(*sptr);
      sptr++;
    }
    printf("%c\n", 13);
  }
}
