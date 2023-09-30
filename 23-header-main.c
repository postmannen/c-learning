#include "23-header-point.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char uint8;

int main() {
  Point p = Point_value(100, 200);
  Point_print(&p);
}