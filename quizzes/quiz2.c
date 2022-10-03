#include <stdio.h>
#include <stdlib.h>
char** readWords(int* count) {
  char** theWords = (char**)malloc(100*sizeof(char*));

  int localCount = 0;
  char* wordBuf = (char*)malloc(100*sizeof(char));
  int isEOF = scanf("%s", wordBuf);  // Nom & cause already a pointer

  while (isEOF != EOF) {

    *(theWords+localCount) = wordBuf;
    wordBuf = (char*)malloc(100*sizeof(char));
    isEOF = scanf("%s", wordBuf);
    //FREE BUFFER
    free(wordBuf); // added: resets the buffer each time the while loop repeats to avoid a stack overflow
    localCount++;
  }
  *count = localCount;
  //CLEAR MEMORY NO LONGER NEEDED AT FUNCTION COMPLETE
  free(theWords); //edit: frees the word list memory when the functuion repeats (essentially a reset for the allocated memory)
  return theWords;
}

int main() {
  int count;
  char** words = readWords(&count);
  printf("%s", *words); // for error checks
}
