#include "23-header-point.h"
#include <stdio.h>

Point Point_value(double x, double y) {
  Point new_point = {x, y};
  return new_point;
}

void Point_print(Point *self) {
  //
  printf("%f, %f", self->x, self->y);
}