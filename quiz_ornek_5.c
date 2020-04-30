/*
  Soru: COVID-19 pandemesi sebebiyle farklı ülkeler için toplumların EVDEKAL çağrısına ve virüsten korunma
  uygulamalarına uyma yüzdeleri kullanıcı tarafından girilecektir.Yazacağınız bu program kullanıcıdan alınan
  bu string değişkenindeki her bir ülkeyi oran miktarına göre küçükten büyüğe sıralayacak ve karşılarına her
  bir ülkenin oran değerini yazdıracaktır.Kullanıcı yalnızca bir kez input girişi yapmalı ve aşağıdaki talimatlara
  uymalıdır!

  Talimatlar:
  -> Oran miktarı aynı olan ülkeler ülke isimlerinin alfabetik önceliğine göre sıralanmalıdır.
  -> Kelimeler ve rakamlar arasında bosluk bulunmalıdır.
  -> Kullanıcı istedigi kadar rakam ve ulke girebilir.

  Ornek giriş : TURKIYE55AMERIKA33ALMANYA55ITALYA25CIN70
  Ornek çıktı:

  CIN 70
  ALMANYA 55
  TURKIYE 55
  AMERIKA 33
  ITALYA 25
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {
    char a[10000];
    char ulkeler[30][30];
    int oranlar[30];
    int sira[30];
    for(int i=0; i<30; i++){
        sira[i] = i;
    }
    int u = 0,o = 0;
    gets(a);
    int c = 0;
    for (int i=0; i<strlen(a) ; i++){
        if (isdigit(a[i])){
            oranlar[o++] = ((a[i] - '0') * 10) + (a[i+1] - '0');
            strncpy(ulkeler[u++],a+c,i-c);
            c = i+2;
            i++;
        }
    }
    int temp;
    int gecici[o];
    for (int i=0; i<o; i++){
        gecici[i] = oranlar[i];
    }
    for (int i=0; i<o; i++){
        for (int j=0; j<o-1; j++){
            if (gecici[j] < gecici[j+1]){
                temp = gecici[j];
                gecici[j] = gecici[j+1];
                gecici[j+1] = temp;
                temp = sira[j];
                sira[j] = sira[j+1];
                sira[j+1] = temp;
            }
        }
    }
    for (int i=0; i<o-1 ; i++){
        if (oranlar[sira[i]] == oranlar[sira[i+1]]){
            if (ulkeler[sira[i]][0] > ulkeler[sira[i+1]][0]){
                int temp = sira[i];
                sira[i] = sira[i+1];
                sira[i+1] = temp;
            }
        }
    }
    printf("\n");
    for (int i=0; i<o; i++){
        printf("%s %d\n",ulkeler[sira[i]],oranlar[sira[i]]);
    }
    return 0;
}