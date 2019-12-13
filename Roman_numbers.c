#include <stdio.h>
int main(){
    int number,s,i;
    printf("Enter number:");
    scanf("%d",&number);
    if (number >= 1000){
        i = number/1000;
        number -= i*1000;
        for (s=0; s<i ; s++){
            printf("M");
        }
    }
    if (number >= 500){
        i = number/500;
        number -= i*500;
        for (s=0; s<i; s++){
            printf("D");
        }
    }
    if (number >= 100){
        i = number/100;
        number -= i*100;
        for (s=0; s<i; s++){
            printf("C");
        }
    }
    if (number >= 50){
        i = number/50;
        number -= i*50;
        for (s=0; s<i; s++){
            printf("L");
        }
    }
    if (number >= 10){
        i = number/10;
        number -= i*10;
        for (s=0; s<i; s++){
            printf("X");
        }
    }
    if (number >= 5){
        i = number/5;
        number -= i*5;
        for (s=0; s<i; s++){
            printf("V");
        }
    }
    if (number > 0){
        if (number == 4){
            printf("IV");
        }
        else{
        for (s=0; s<number; s++){
            printf("I");
        }
        }
    }
    return 0;
}
