//
// Created by Muhammed Zahid on 12/18/2019.
//
#include <stdio.h>

int fibonacci(int sayi){
    if (sayi == 0)
        return 0;
    else if (sayi == 1)
        return 1;
    else {
        return fibonacci(sayi-1)+fibonacci(sayi-2);
    }
}

int asalMi(int sayi,int kontrolsayisi){
    if (sayi == 1 || sayi == 0)
        return 1;
    else if (kontrolsayisi == 1)
        return 0;
    else {
        int c = sayi % kontrolsayisi;
        if (c == 0){
            return 1 + asalMi(sayi,kontrolsayisi-1);
        }
        else {
            return 0 + asalMi(sayi,kontrolsayisi-1);
        }
    }
}

int main(){
    int eleman,s;
    printf("Fibonacci eleman sayisi: ");
    scanf("%d",&eleman);
    for (s = 0; s< eleman ; s++){
        printf("%d",fibonacci(s));
        if (asalMi( fibonacci(s) , fibonacci(s)-1 ) == 0){
            printf("(asal)");
        }
        printf(" ");
    }
    return 0;
}

