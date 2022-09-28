#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Nathan Cauwet

typedef struct hist {
    char* word;
    int freq;
} histogramEntry;

string* readWords(int* num) {//works
    string* a = malloc(100 * sizeof(string)); // allocate space for 100 strings (string*)
//    bool done = false;
    int i = 0;//count
//    while (!done) {
      while(strcmp(a->letters, "\0") != 0) {
        string in;
        scanf("%s", in.letters);
          if(strcmp((in.letters+i), " ") != 0) {
              strcpy((a->letters + i), in.letters);//copy the value to the array
              i++;//increment count
          }


        /*
        if (strcmp(in.letters, "\0") != 0) {//if \0 is not the input
            //if strcmp " " then skip to next word
            if(strcmp(in.letters, " ") != 0) {
                strcpy(a[i].letters, in.letters);//copy the value to the array
                i++;//increment count
            }

        } else {
            done = true;
        }*/
    }
    *num = i;//number of words
    return a;//array of words
}

void displayWords(string* a, int num) {//works
    printf("Words:\n");
    for (int i = 0; i < num; i++) {
        printf("%d: %s\n", i, a[i].letters);
    }
}

histogramEntry* makeHistogram(string* a, int num, int* num2) {
    histogramEntry *h = malloc(num * sizeof(histogramEntry));//holds the # of numWords of histogramEntry sized spaces
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

void displayHistogram(histogramEntry* h, int num) {//works
    printf("Histogram:\n");
    for (int i = 0; i < num; i++) {
        printf("%d: %s with freq of %d\n", i, h[i].word.letters, h[i].freq);

    }
}

histogramEntry* sortHistogram(histogramEntry* h, int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (h[i].freq > h[j].freq) {
                int temp = h[j].freq;//store freq
                h[j].freq = h[i].freq;//switch for new freq
                h[i].freq = temp;//replace with stored freq
                string word = h[j].word;//store word
                h[j].word = h[i].word;//switch for new word
                h[i].word = word;//replace with stored word
            }
        }
    }
    return h;
}//works

int main() {
    string* words;
    int numWords;

    words = readWords(&numWords);//make words array
    displayWords(words, numWords);

    int numHist;//reduced total
    histogramEntry* histogram;

    histogram = makeHistogram(words, numWords, &numHist);//make histogram array, returns numHist as a pointer
    displayHistogram(histogram, numHist);
    histogram = sortHistogram(histogram, numHist);//sorts in descending order
    displayHistogram(histogram, numHist);

    return 0;
}