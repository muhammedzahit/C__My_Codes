#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice();
int main(){
    enum status{WON,LOST,CONTINUE};
    srand(time(NULL));
    int s,wonCounter=0,lostCounter=0,gameTime=0,repeat;
    for (s=1; s<=100000; s++){
        int sum = rollDice();
        if (sum == 7 || sum == 12){
            wonCounter++;
            gameTime++;
            continue;
        }
        if (sum == 2 || sum == 3 || sum == 12 ){
            lostCounter++;
            gameTime++;
            continue;
        }
        int point = sum;
        enum status game = CONTINUE;
        while (game == CONTINUE){
            gameTime++;
            sum = rollDice();
            if (sum == point){
                wonCounter++;
                game = WON;
            }
            if (sum == 7){
                lostCounter++;
                game = LOST;
            }
        }
    double repeat = gameTime/(double)s;
    double winRate = wonCounter/(double)s;
    if (s % 5000 == 0 || s== 100){
        printf("\nOn %d repeat\n",s);
        printf("Won games: %d\n",wonCounter);
        printf("Lost games: %d\n",lostCounter);
        printf("Per game time: %.3lf\n",repeat);
        printf("Win rate: %.3lf\n\n",winRate);
    }
    }
    return 0;
}
int rollDice(){
    int dice1 = rand()%6+1;
    int dice2 = rand()%6+1;
    return dice1+dice2;

}
