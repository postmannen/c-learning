#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Type { INTS, FLOATS, DOUBLE };
typedef struct {
  // Type is used to tell the caller what type that is used from the union.
  enum Type s_type;
  union {
    int s_ints[2];
    float s_floats[2];
    double s_double;
  };
} S;

int main() {
  S s;
  s.s_type = INTS;
  s.s_ints[0] = 100, s.s_ints[1] = 200;

  switch (s.s_type) {
  case INTS:
    printf("type:%s, value: %d %d", "INTS", s.s_ints[0], s.s_ints[1]);
    break;
  case FLOATS:
    printf("type:%s, value: %f %f", "FLOATS", s.s_floats[0], s.s_floats[1]);
    break;
  case DOUBLE:
    printf("type:%s, value: %f", "DOUBLE", s.s_double);
    break;
  }
};