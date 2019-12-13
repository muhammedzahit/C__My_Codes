#include <stdio.h>
int main(){
    int tutucu,a,faktoriel=1;
    printf("lutfen faktoriyeli alinacak bir sayi giriniz:(pozitif sayi girin!!!)");
    line4:
    scanf("%d",&a);
    tutucu = a;
    if (a < 0 ){
        printf("Yanlis deger girdiniz.Lutfen tekrar deneyin:");
        goto line4;
    }
    while (a > 0){
        faktoriel *=a;
        a--;
    }
    printf("Faktoriyel %d=%d",tutucu,faktoriel);
    return 0;
}
