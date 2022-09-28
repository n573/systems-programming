#include <stdio.h>
#include <stdlib.h>

int* foo() {

  int* a = (int*)malloc(10*sizeof(int));

  int b[10];

  //free(a);
  return a;
}

int main() {
  int* c;
  c = foo();
  free(c);
}
