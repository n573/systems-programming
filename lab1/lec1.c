#include <stdio.h>  // printf

struct coord {
  int x;
  int y;
  int z;
};  // watch out for crazy ;


int doubleIt(int a);  // function prototype

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;

  //  printf("%d %d\n", a, b);
}

void foo(int* theArray) {
  theArray[3] = 3;
}

int main() {

  struct coord c1;
  c1.x = 1;
  c1.y = 15;
  c1.z = 12;

  printf("%d\n", c1.y);

  int x = 5;
  int y = 8;
  double z = 3.2;

  swap(&x, &y);

  printf("%d %d\n", x, y);

  // java array
  //int[] ar = new int[5];
  // ar.size

  int size = 5;
  int ar[size];

  ar[2] = 2;
  printf("%d\n", ar[2]);

  foo(ar);
  printf("%d\n", ar[0]);

  

  /*

  char c = 'd'; // 100;

  //printf("here1\n");

  x = 5;

  //printf("here2\n");

  printf("The value of x is %d \n", x);
  printf("The value of y is %d and z is %lf \n", y, z);

  printf("C is char %d\n", c);

  int intsize = sizeof(int);

  printf("the size of an int is %d\n", intsize);


  if (x == 4) {
    printf("true\n");
  } else {
    printf("false\n");
  }
  */
  /*
  while(x < 5) {

  }

  for (int i=0; i<5; i++) {

  }
  */

  /*
  int xx = doubleIt(x);

  // pointers

  printf("the memory address of x is %p\n", &x);
  printf("the memory address of y is %p\n", &y);
  
  
  int* px = &x;

  int q = *px;

  printf("%d\n", q);

  */

  

  return 0;
}

int doubleIt(int a) {
  return a*2;
}

	    

