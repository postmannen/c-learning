#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static on function and variable names in the global scope will make
// the functions or the variables only available with the current file.
static void printSome() {
  // static used with a variable will make the variable to only be
  // initialized once, and it will also retain it's value over multiple
  // calls.
  static int y = 0;
  printf("nr y = %d\n", y);
  y++;
}

int main() {
  printSome();
  printSome();
  printSome();

  return 0;
}