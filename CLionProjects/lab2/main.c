#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Nathan Cauwet

typedef struct freq {
    int freq;
    char* word;
} Histogram;
//typedef struct hist {//given
//    string word;
//    int freq;
//} histogramEntry;

/*string *readWords(int *num) {
    string *a = malloc(20 * sizeof(string));
    bool done = false;
    int i = 0;//count
    while (!done) {
        string in;
        scanf("%s", in.letters);
        if (strcmp(in.letters, (const char *) EOF) != 0) {//if \0 is not the input
            strcpy(a[i].letters, in.letters);//copy the value to the array
            i++;//increment count
        } else {
            done = true;
        }
    }
    *num = i;//number of words
    return a;//array of words
}*/

Histogram* readWords() {
    char* in = malloc(sizeof(char*));
    bool done = false;
    Histogram *hist;
    while(!done) {
        scanf("%s", in);
        if(strcmp(in,"\0")==0) {
            done = true;
        }
        hist->word = in;
        printf("%s", hist->word);
    }

    return hist;

}

void displayWords(char *a, int num) {//works
//    printf("Words:\n");
//    for (int i = 0; i < num; i++) {
//        printf("%d: %s\n", i, a[i].letters);
//    }
}

/*Histogram *makeHistogram( *a, int num, int *num2) {
    Histogram *h = malloc(num * sizeof(Histogram));//holds the # of numWords of histogramEntry sized spaces
    int n = 0;//count
    for (int i = 0; i < num; i++) {
        bool done = false;//if done is true then a repeat word has been found
        int q = 0;
        while (q < n && done == false) {
            if (strcmp(a[i].letters, h[q].word.letters) == 0) {
                h[q].freq = h[q].freq + 1;//increments frequency
                done = true;
            } else {
                q++;//increments q if NOT 0
            }
        }
        if (!done) {//1st instance or unique word
            strcpy(h[q].word.letters, a[i].letters);//strcpy is used because of the
            h[q].freq = 1;
            n++;//increment count
        }
    }
    *num2 = n;
    return h;
}//works

void displayHistogram(Histogram *h, int num) {//works
    printf("Histogram:\n");
    for (int i = 0; i < num; i++) {
        printf("%d: %s with freq of %d\n", i, h[i].word.letters, h[i].freq);

    }
}
*/

//Histogram *sortHistogram(Histogram *h, int num) {
//    for (int i = 0; i < num; i++) {
//        for (int j = 0; j < num; j++) {
//            if (h[i].freq > h[j].freq) {
//                int temp = h[j].freq;//store freq
//                h[j].freq = h[i].freq;//switch for new freq
//                h[i].freq = temp;//replace with stored freq
//                string word = h[j].word;//store word
//                h[j].word = h[i].word;//switch for new word
//                h[i].word = word;//replace with stored word
//            }
//        }
//    }
//    return h;
//}//works

int main() {

    Histogram h;
    readWords(&h);

//    histogram.word

//    string *words;
//    int numWords;
//
//    readString(words);
//    //words = readWords(&numWords);//make words array
//    displayWords(words, numWords);
//
//    int numHist;//reduced total
//    histogramEntry *histogram;
//
//    histogram = makeHistogram(words, numWords, &numHist);//make histogram array, returns numHist as a pointer
//    displayHistogram(histogram, numHist);
//    histogram = sortHistogram(histogram, numHist);//sorts in descending order
//    displayHistogram(histogram, numHist);

    return 0;
}