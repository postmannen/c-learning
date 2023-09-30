// Define structures and function signatures in the header file.
// The actual implementation of the function are done in the c file.

// Documentation for functions are also done in the header file.

// We need to guard the code with #ifndef in case there are other
// code written with the same signatures, so we don't import them
// twice.
#ifndef POINT_H
#define POINT_H

// Point is a struct..bla bla
typedef struct Point {
  double x;
  double y;
} Point;

// Point_value bla vla
Point Point_value(double x, double y);

// Point_print bla bla
void Point_print(Point *self);

#endif // !POINT_H