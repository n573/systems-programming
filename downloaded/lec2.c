#include <stdio.h>  // printf
#include <stdlib.h> // malloc
#include <string.h> // string operations

//void fill(int* b, int* count) {
//  int c = 0;
//  for (int i=0; i<5; i++) {
//    b[i] = i*2;
//    c++;
//    //*count = *count + 1
//  }
//  *count = c;
//}


int* fill(int* count) {
  //int a[10];  // creates on runtime stack
  int* a = (int*)malloc(10 * sizeof(int)); // creates array on heap
  int c = 0;
  for (int i=0; i<5; i++) {
    a[i] = i*2;
    c++;
    //*count = *count + 1
  }
  *count = c;
  return a;
}

int main() {

  //int a[10];
  int* a;
  int count = 0;
  
  a = fill(&count);
  printf("%d\n", a[2]);

  char s[6];
  s[0] = 'h';
  s[1] = 'e';
  s[2] = 'l';
  s[3] = 'l';
  s[4] = 'o';
  s[5] = '\0';

  // type of s is: char*

  printf("x%sx\n", s);

  s = "hi";

  strlen(s); // length
  strcmp(s1, s2);  // like compareto

  strcpy(s1,s2);

  
  //  a[4] = 5;
  //  int x = 15000;
  //  printf("%d\n", a[x]); //  a[15] --> *(a+15000);

  /*
  int b = 5;

  printf("%p\n%p\n%p\n%p\n", a, a+1, &(a[0]), &(a[1]));
  // a[5] === *(a+5)


  */
  

  return 0;
}
