#include <stdio.h>

struct ogrencibilgi{
    char isim[50];
    int yas;
    float vize;
    float finalnot;
};
void ogrencidegeral(struct ogrencibilgi *p);
void dosyayaz(struct ogrencibilgi *isaretci);

int main(){
    struct ogrencibilgi ogrenciler[20];
    printf("OGRENCi NOT SISTEMI\n*********************\n");
    printf("En fazla 20 ogrenci kaydedibilirsiniz.\n");
    printf("Vize ve Final notunuzu virgillu olarak giriniz.(90.0 gibi)\n");
    printf("Ogrenci kayitini durdurmak icin yas degerini '-1' giriniz.\n");
    int sayac;
    ogrencidegeral(ogrenciler);
    dosyayaz(ogrenciler);


    return 0;
}
void ogrencidegeral(struct ogrencibilgi *p){
    for (int sayac=0; sayac<20; sayac++){
        printf("\n\n%d.Ogrencinin Bilgilerini Giriniz.\n",sayac+1);
        printf("isim:");
        scanf("%s",p->isim);
        printf("yas:");
        scanf("%d",&p->yas);
        if (p->yas == -1) break;
        printf("vize notu:");
        scanf("%f",&p->vize);
        printf("final notu:");
        scanf("%f",&p->finalnot);
        p++;

    }
}
void dosyayaz(struct ogrencibilgi *isaretci){
    FILE *ptr;
    ptr = fopen("C:\\Users\\Muhammed Zahid\\Desktop\\ogrenci listesi\\liste.txt","w+");//dosyanin kaydedildigi kismi degistirebilirsin.
    for (int a=0; a<20 ; a++){
        if (isaretci->yas == -1)
            break;
        fprintf(ptr,"\n%d.Ogrenci\n",a);
        fprintf(ptr,"isim:%s\n",isaretci->isim);
        fprintf(ptr,"yas:%d\n",isaretci->yas);
        float ortalama = (isaretci->finalnot*60 + isaretci->vize*40)/(float)100;
        fprintf(ptr,"ortalama:%f\n",ortalama);
        if (ortalama > 50.00)
            fprintf(ptr,"dersi gecmistir.\n");
        else
            fprintf(ptr,"dersten kalmistir.\n");
        isaretci++;

    }
    fclose(ptr);
}
