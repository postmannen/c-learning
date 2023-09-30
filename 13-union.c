#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// just an union
union {
  char name[20];
  int age;
} myUnion;

// named union inside a struct
typedef struct {
  union {
    char name[20];
    int age;
  } myUnion;
} myStruct;

// unnamed union inside a struct
typedef struct {
  union {
    char name[20];
    int age;
  };
} otherStruct;

// another named union
union {
  int whole;
  struct {
    char b1, b2, b3, b4;
  } byte;
} value;

int main() {
  strcpy(myUnion.name, "asterix");
  printf("%s\n", myUnion.name);

  myStruct str;
  strcpy(str.myUnion.name, "obelix");
  printf("%s\n", str.myUnion.name);

  otherStruct oStr;
  strcpy(oStr.name, "idefix");
  printf("%s\n", oStr.name);

  value.byte.b1 = 99, value.byte.b2 = 99, value.byte.b3 = 99,
  value.byte.b4 = 99;
  printf("%c %c %c %c\n", value.byte.b1, value.byte.b2, value.byte.b3,
         value.byte.b4);
}