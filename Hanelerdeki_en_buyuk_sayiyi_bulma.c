#include <stdio.h>
#include <math.h>
int main(){
    printf("Kac basamakli sayi gireceginizi seciniz:");
    int basamak;
    scanf("%d",&basamak);
    int a= basamak;
    printf("Sayiyi giriniz:");
    int sayi,s,enbuyuk;
    scanf("%d",&sayi);
    int dizi[a];
    for (s=0; s<a ; s++){
        dizi[s] = sayi/(int)pow((double)10,(double)a-s-1);
        sayi = sayi%(int)pow((double)10,(double)a-s-1);
    }
    for (s=0; s<a ; s++){
        enbuyuk =0;
        if (dizi[s] > enbuyuk) enbuyuk = dizi[s];
    }
    printf("Haneler icindeki en buyuk sayi:%d",enbuyuk);
}
