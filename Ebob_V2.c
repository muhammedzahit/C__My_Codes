#include <stdio.h>
int obeb_bul(int sayi){
    int sayilar[sayi];
    int i,ebob=1,en_kucuk,sayac,s;
    for(i=0; i<sayi ; i++){
        printf("%d . sayiyi girin : ",i+1);
        scanf("%d",&sayilar[i]);
    }
    en_kucuk = sayilar[0];
    for (i=1; i<sayi; i++){
        if (sayilar[i] < en_kucuk) en_kucuk = sayilar[i];
    }
    for (i=2; i<=en_kucuk;i++){
        sayac = 0;
        for (s=0; s<sayi; s++){
            if (sayilar[s] % i == 0) sayac++;
        }
        if (sayac == sayi){
            ebob = i;
        }
    }
    return ebob;
}
int main(){
    int a,b;
    printf("Kac sayinin ebobunu bulmak istiyorsunuz ?  ");
    scanf("%d",&a);
    b = obeb_bul(a);
    printf("Obeb : %d",b);
    return 0;
}
