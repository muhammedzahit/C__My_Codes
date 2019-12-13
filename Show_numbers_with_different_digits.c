// SHOW NUMBERS WITH DIFFERENT DIGITS

#include <stdio.h>
int main(){
    int a,b,c,i,sinir,sayac=0;
    printf("This program find numbers with different digits between your limits.\n");
    printf("Starter number:");
    scanf("%d",&i);
    printf("Final number:");
    scanf("%d",&sinir);
    for (i; i<=sinir; i++){
        a = i/100;
        b = (i%100)/10;
        c = i%10;
        if (a != b && a != c && b != c){
            printf("%5d",i);
            sayac++;
        }
    }
    printf("Number of numbers with different digits:  %d",sayac);
}
