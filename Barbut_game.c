/*
RULES:
ON FİRST ROLL:(SUM = FIRST DICE + SECOND DICE)
IF SUM 7 OR 11 YOU WILL WIN
IF SUM 2,3 OR 12 YOU WILL LOST
IF OUTSIDE OF THESE, SUM IS WILL BE YOUR POINT 
OTHER ROLLS:
IF YOUR SUM IS BE SAME YOUR POINT YOU WILL WIN
BUT IF YOUR SUM IS 7 YOU WILL LOSE
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int rollDice();
int main(){
    printf("            WELCOME THE BARBUN GAME\n\n");
    srand(time(NULL));
    int balance = 1000;
    while (balance > 0){
    printf("Your balance : %d\n",balance);
    int bet;
    printf("Enter a bet:");
    scanf("%d",&bet);
    if (bet > balance){
        printf("You don't enough money. Try again:");
        scanf("%d",&bet);
    }
    enum status{WON,LOST,CONTINUE};
    printf("\nEnter a key to roll dice....\n");
    getch();
    int a = rollDice();
    enum status barbun;
    int point;
    switch(a){
        case 7:
            printf("CONGRATULATIONS you win.");
            balance += bet;
            barbun = 0;
            break;
        case 11:
            printf("CONGRATULATIONS you win.");
            balance += bet;
            barbun = 0;
            break;
        case 2:
            printf("SORRY you lost.");
            balance -= bet;
            barbun = 1;
            break;
        case 3:
            printf("SORRY you lost.");
            balance -= bet;
            barbun = 1;
            break;
        case 12:
            printf("SORRY you lost.");
            balance -= bet;
            barbun = 1;
            break;
        default:
            barbun = 2;
            point = a;
            printf("Your point is %d\n",point);

    }

    while (barbun == 2){
        printf("\nEnter a key to roll dice....\n");
        getch();
        a = rollDice();


        if (a == point) {
            barbun = 0;
            balance += bet;
            printf("CONGRATULATIONS you win.");
        }
        else if (a == 7){
            barbun = 1;
            balance -= bet;
            printf("SORRY you lost.");
        }
        else {
            printf("Keep Going....\n");
        }


    }
    printf("\nSORRY,YOU LOST ALL YOUR MONEY ");
    }
    return 0;
}
int rollDice(){
   int a = rand() % 6 + 1;
   printf("\nFirst Dice:  %d\n",a);
   int b = rand() % 6 + 1;
   printf("Second Dice:  %d\n",b);
   int c = a+b;
   printf("Sum:   %d\n\n",c);
   return c;
}
