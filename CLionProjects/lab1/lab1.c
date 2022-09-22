#include <stdio.h>  // printf
#include <stdlib.h> // malloc
#include <string.h> // string operations

//Nathan Cauwet

typedef struct str {
    char letters[5];
} string;

typedef struct hist {
    string word;
    int freq;
} histogramEntry;

int main() {
//    char curr;
//    char a[100];
    string a[100];
    //int* foo;
    char *mal = malloc(100);
    string s = {"foo"}; int i = 0;
    while(strcmp(s.letters, "\0") != 0) {
        scanf("%s",s.letters);
        printf("%s ", s.letters);
        strcpy(a[i].letters, s.letters);
        i++;
    }


/*
    int testIn;
    scanf("%d", &testIn);
    printf("%d\n",testIn);
*/

/* working kind of
    for(int i=0; i<100; i++) {
//        scanf("%d",&a[i]); // gets the whole number
        scanf("%c",&a[i]); //works with strcmp
//        printf("%d\n",a[i]);
        printf("%c",a[i]);
//        if(putchar(a[i]) == "\0") {
        if(strcmp(&a[i],"\0") == 0) {
            break;
        }
    }
*/

//    int i = 0;

//    char* string;
//    while(strcmp(&mal,"\0") != 0) {
    /*
    while(i< sizeof a) {
        scanf("%s", *&mal);
        printf("%s ", mal);
//        scanf("%d",&a[i]);
//        printf("%d ",a[i]);
//        scanf("%c",&a[i]);
//        printf("%c",a[i]);
        i++;
    }
*/

/*
    int ar[20];
    scanf("%d %d %d %d", &ar[0], &ar[1], &ar[2], &ar[3]);
    printf("%d %d %d %d\n", ar[0],ar[1],ar[2],ar[3]);
*/
    //foo = fscanf(stdin, "%d", a);
    //scanf("%d %d %d %d\n", &a);
    //fprintf(stdout,"%d",foo);

    //printf("%d",&foo);

    /*
    char* arr = malloc(100);
    arr[0] = 100;
    printf("%d", arr[0]);
*/


   // printf("Hello, World!\n");
    return 0;
}