#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
void usalma(int taban,int us);
void aratoplam(int sayi1,int sayi2);
void yazi_tura_similasyonu(int kackere);
void zaratma();
void kokal(float taban);
void enbuyuk(float sayi1,float sayi2,float sayi3);
void menu_bas(){
    system("cls");
    printf("\na.us alma islemi\n");
    printf("b.iki tam sayi arasindaki tum sayilarin toplami\n");
    printf("c.yazi-tura similasyonu\n");
    printf("d.iki zar at\n");
    printf("e.kok al\n");
    printf("f.girilen uc sayidan en buyugunu bulma\n");
    printf("h.programdan cikar.\n");
    printf("lutfen seciminizi giriniz:");
}
int main(){
    srand(time(NULL));


    int girdi1,girdi2;
    float girdi3,girdi4,girdi5;

    int kontrol = 0;
    do{
    menu_bas();
    char secim;
    scanf(" %c",&secim);
    switch(secim){
    case 'a':
        printf("taban giriniz:");
        scanf("%d",&girdi1);
        printf("us giriniz:");
        scanf("%d",&girdi2);
        usalma(girdi1,girdi2);
        break;
    case 'b':
        printf("hangi tam sayilarin arasinin toplanacagini seciniz.(2 ve 5 seklinde)\n");
        scanf("%d ve %d",&girdi1,&girdi2);
        aratoplam(girdi1,girdi2);
        break;

    case 'c':
        printf("kac kare yazi tura atilmasini istiyorsunuz?     ");
        scanf("%d",&girdi1);
        yazi_tura_similasyonu(girdi1);
        break;

    case 'd':
        zaratma();
        break;

    case 'e':
        printf("koku alinacak sayiyi giriniz:");
        scanf("%f",&girdi3);
        kokal(girdi3);
        break;

    case 'f':
        printf("uc kesirli sayi giriniz.(1.2 ve 3.1 ve 4.2 gibi)\n");
        scanf("%f ve %f ve %f",&girdi3,&girdi4,&girdi5);
        enbuyuk(girdi3,girdi4,girdi5);
        break;

    case 'h':
        kontrol = 1;
        break;
    default:
        printf("yanlis girdi girdiniz!!!\n");
        break;
    }
    printf("\ndevam etmek icin bir tusa basiniz....");
    getch();


    }while(kontrol == 0);
    printf("\nprogramdan basirayla cikilmistir, iyi gunler dileriz....");
    return 0;
}
void usalma(int taban,int us){
    float sonuc=1.00;
    int s;
    for (s=0; s<us; s++){
        sonuc *=taban;
    }
    printf("ISLEM SONUCU:%.3f",sonuc);
}
void aratoplam(int sayi1,int sayi2){
    int toplam =0;
    for (sayi1; sayi1<= sayi2; sayi1++){
        toplam +=sayi1;
    }
    printf("ISLEM SONUCU:%d",toplam);
}
void yazi_tura_similasyonu(int kackere){
    int s;
    int sonuc;
    int turasayisi=0;
    int yazisayisi=0;
    for(s=0; s<kackere; s++){
        sonuc = rand()%2;
        if(sonuc == 0){
            printf("TURA\n");
            turasayisi++;
        }
        else{
            printf("YAZI\n");
            yazisayisi++;
        }

    }
    printf("TURA SAYISI:%d\n",(turasayisi));
    printf("YAZI SAYISI:%d\n",(yazisayisi));
}
void zaratma(){
    int zar1,zar2;
    zar1= (rand()%6)+1;
    zar2 = (rand()%6)+1;
    printf("zar1=%d",zar1);
    printf("\nzar2=%d",zar2);
    if (zar1 == zar2){
        printf("\nDUSES TEBRIKLER!!!\n");
    }
}
void kokal(float taban){
    printf("ISLEM SONUCU:%.2f",sqrt(taban));
}
void enbuyuk(float sayi1,float sayi2,float sayi3){
    if (sayi1> sayi2 && sayi1 > sayi3){
        printf("EN BUYUK:%f(1.sayi)",sayi1);
    }
    if (sayi2> sayi1 && sayi2 > sayi3){
        printf("EN BUYUK:%f(2.sayi)",sayi2);
    }
    if (sayi3> sayi1 && sayi3 > sayi2){
        printf("EN BUYUK:%f(3.sayi)",sayi3);
    }
}
