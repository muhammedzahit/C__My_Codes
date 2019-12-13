#include <stdio.h>
#include <conio.h>
struct telefon_kayit{
    char isim[25];
    char soyisim[25];
    int yas;
    char telefon_no[20];
};
void menu_bas();
void kayit_ekleme(struct telefon_kayit *rehber);
void kayitlari_goster(struct telefon_kayit *rehber);
void kayitlari_yaz(struct telefon_kayit *rehber);
void bilgi_al(struct telefon_kayit *rehber);
int main(){
    struct telefon_kayit rehber[50];

    rehber[0].yas = -1;

    bilgi_al(rehber);

    int a=0;

    int secim;
    while(a == 0){
        menu_bas();
        printf("Lutfen seciminizi giriniz:");
        scanf("%d",&secim);
        switch(secim){
            case 1:
                kayit_ekleme(rehber);
                break;
            case 2:
                kayitlari_goster(rehber);
                break;
            case 9:
                a = 1;
                kayitlari_yaz(rehber);
                printf("Cikmak icin bir tusa basin..");
                break;
            default:
                printf("Yanlis deger girdiniz.\n");
        }
        getch();
    }
    return 0;

}
void menu_bas(){
    system("cls");
    printf("************************\n");
    printf("1-Kayit ekleme\n");
    printf("2-Kayitlari goster\n");
    printf("9-Programdan cik\n");
    printf("Lutfen belirtilen degerler icinden bir deger giriniz.\n");
    printf("************************\n");
}
void kayit_ekleme(struct telefon_kayit *rehber){
    int s;
    for (s=0;s<50;s++){

    if (rehber[s].yas == -1) break;
    }
    printf("isim:");
    scanf("%s",rehber[s].isim);
    printf("Soyisim:");
    scanf("%s",rehber[s].soyisim);
    printf("Yas:");
    scanf("%d",&rehber[s].yas);
    printf("Telefon Numarasi:");
    scanf("%s",rehber[s].telefon_no);
    printf("Kayit basariyla tamamlandi.Devam etmek icin bir tusa basin.");


    rehber[s+1].yas = -1;
    }

void kayitlari_goster(struct telefon_kayit *rehber){
    int s;
    for (s=0; s<50; s++){
    if(rehber[s].yas == -1) break;
            printf("\n%d.Kisi\n",s+1);
            printf("isim:%s\n",rehber[s].isim);
            printf("Soyisim:%s\n",rehber[s].soyisim);
            printf("Yas:%d\n",rehber[s].yas);
            printf("Numara:%s\n",rehber[s].telefon_no);

    }
    printf("Menuye donmek icin bir tusa basiniz.");
}
void kayitlari_yaz(struct telefon_kayit *rehber){
    FILE *dosya;
    dosya = fopen("rehber.txt","w+");
    int s;
    for (s=0; s<50; s++){
        if (rehber[s].yas == -1) break;
        fprintf(dosya,"%s  %s  %d  %s\n",rehber[s].isim,rehber[s].soyisim,rehber[s].yas,rehber[s].telefon_no);
    }
    fclose(dosya);

}
void bilgi_al(struct telefon_kayit *rehber){
    FILE *dosya;
    dosya = fopen("rehber.txt","r+");
    int s;
    if (dosya == NULL)
        return;
    for (s=0; s<50; s++){

        fscanf(dosya,"%s  %s  %d  %s\n",rehber[s].isim,rehber[s].soyisim,&rehber[s].yas,rehber[s].telefon_no);
        if (feof(dosya)) break;
    }
    rehber[s+1].yas=-1;
    fclose(dosya);
}
