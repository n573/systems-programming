#include <stdio.h>

void readScores(int* scores, int arrLen) {
    // int in; 
    // while(in != EOF) {
    //     scanf('%d', &in);
    // }
    while(scores[arrLen] != EOF) {
        scanf("%d", &scores[arrLen]);
        arrLen++;
    }
    

}

void displayScores() {

}

void calcHistogram() {

}

void displayHistogram() {

}

void sortHistogram() {

}

int main() {
    // int* scoreList;
    int scoreList[100];
    int numScore;

    readScores(scoreList, numScore);
    


    // printf("Hello, World!\n");
    return 0;
}