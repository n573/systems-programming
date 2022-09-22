#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Nathan Cauwet

typedef struct hist {//given
    int score;
    int freq;
} histogramEntry;

int *readScores(int *num) {//works
    int *a = malloc(100 * sizeof(int));
    int i = 0;//count
    while (a[i] != EOF) { // condition doesn't work yet
        int in;
        scanf("%d", &in);
//        strcpy(a[i],in);
        a[i] = in;
        i++;//increment count
        if(in == EOF){ // remove in final version (ideally)
            break;
        }
    }
    *num = i;//number of words
    return a;//array of words
}

void displayScores(int *a, int num) {//works
    printf("Scores:\n");
    for (int i = 0; i < num; i++) {
        printf("%d: %d\n", i, a[i]);
    }
}
/*
histogramEntry *makeHistogram(int *a, int num, int *num2) {
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
*/

void displayHistogram(histogramEntry *h, int num) {//works
    printf("Histogram:\n");
    for (int i = 0; i < num; i++) {
        printf("%d: %d with freq of %d\n", i, h[i].score, h[i].freq);

    }
}
/*
histogramEntry *sortHistogram(histogramEntry *h, int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (h[i].freq > h[j].freq) {
                int temp = h[j].freq;//store freq
                h[j].freq = h[i].freq;//switch for new freq
                h[i].freq = temp;//replace with stored freq
                int word = h[j].word;//store word
                h[j].word = h[i].word;//switch for new word
                h[i].word = word;//replace with stored word
            }
        }
    }
    return h;
}//works
*/
int main() {
    int *scores;
    int numScores;

    scores = readScores(&numScores);//make array
    displayScores(scores, numScores);

    int numHist;//reduced total
    histogramEntry *histogram;
/*
    histogram = makeHistogram(words, numWords, &numHist);//make histogram array, returns numHist as a pointer
    displayHistogram(histogram, numHist);
    histogram = sortHistogram(histogram, numHist);//sorts in descending order
    displayHistogram(histogram, numHist);
*/
    return 0;
}