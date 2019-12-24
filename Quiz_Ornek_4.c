#include <stdio.h>
int armstrongMu(int sayi){
    int holder = sayi;
    int a,toplam=0;
    while (sayi > 0){
        a = sayi % 10;
        a = a*a*a;
        toplam += a;
        sayi /= 10;
    }
    if (holder == toplam) return 1;
    else return 0;
}
int main(){
    int flag = 1,number;
    while (flag){
        printf("Bir sayi giriniz:");
        scanf("%d",&number);
        if (number == 0){
            flag = 0;
            continue;
        }
        printf("%s",armstrongMu(number) ? "Armstrong bir sayidir\n\n" : "Armstrong bir sayi degildir\n\n");
    }
    printf("Program basariyla sonlandi.");
    return 0;
}