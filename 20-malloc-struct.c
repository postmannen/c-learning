#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8;

struct date {
  int day;
  int month;
  int year;
};

int main() {
  // Declaring a pointer to a struct will only allocate space for the pointer.
  // To also allocate space for it's members/fields we need to use malloc.

  struct date *birthday;
  printf("%lu\n", sizeof(*birthday));
  birthday = (struct date *)malloc(sizeof(struct date));
  printf("%lu\n", sizeof(*birthday));

  birthday->day = 10;
  birthday->month = 10;
  birthday->year = 10;
  printf("day: %d, month: %d, year: %d\n", birthday->day, birthday->month,
         birthday->year);

  struct date *xmas = (struct date *)malloc(sizeof(struct date));
  printf("%lu\n", sizeof(*xmas));
}