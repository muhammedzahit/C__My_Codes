#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shuffleCards(int deck[4][13]){
    int s,row,column;
    for (s=1; s<=52; s++){
        do{

        row= rand()%4;
        column = rand()%13;

        }while (deck[row][column] != 0 );

        deck[row][column] = s;
    }
}
void showShuffledCards(int deck[4][13],char *suit[4],char *face[13]){
    int s;
    for (s=1; s<=52; s++){
        int i,j;
        for (i=0; i<4; i++){
            for (j=0; j<13; j++){
                if (deck[i][j] == s){
                    printf("%8s%8s  ",suit[i],face[j]);
                }

            }
        }
        if (s % 2 == 0){
            printf("\n");
        }
    }
}
int main(){
    srand(time(NULL));
    char *suit[4]={"Hearts","Diamonds","Clubs","Spades"};
    char *face[13]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
    int deck[4][13]={0};
    int a=1,s;
    shuffleCards(deck);
    showShuffledCards(deck,suit,face);
    return 0;
}
