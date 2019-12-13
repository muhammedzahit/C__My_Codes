#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARDS 52
#define FACES 13
struct card{
    const char *face;
    const char *suit;
};
int i,s;
typedef struct card Card;
void fillDeck(Card *const deck,const char *faces[],const char *suits[]);
void shuffleDeck(Card *const deck);
void dealDeck(const Card *const deck);
int main(){
    srand(time(NULL));
    Card deck[ CARDS ];

    const char *faces[]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
                         "Jack","Queen","King"};
    const char *suits[]={"Hearts","Diamonds","Clubs","Spades"};
    fillDeck(deck,faces,suits);
    shuffleDeck(deck);
    dealDeck(deck);

}
void fillDeck(Card *const deck,const char *faces[],const char *suits[]){
    for (i=0; i<CARDS ; i++){
        deck[i].face = faces[i % FACES];
        deck[i].suit = suits[i / FACES];
    }
}
void shuffleDeck(Card *const deck){
    Card holder;
    for (i=0; i<CARDS ; i++){
        s = rand()%CARDS;
        holder = deck[i];
        deck[i] = deck[s];
        deck[s] = holder;
    }
}
void dealDeck(const Card *const deck){
    for (i=0; i<CARDS ; i++){
        printf("%5s%s%8s%s",deck[i].face," of ",deck[i].suit,(i+1) % 4 ? "  " : "\n");
    }
}
