#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
struct ogrenci{
    char isim[50];
    int yas;
    int no;
    float ortalama;
    char bolum[50];

};
void menu_bas();
int uzunlukbul(struct ogrenci *);
void hepsinisil(struct ogrenci *);
void kayit(struct ogrenci *);
void goster(struct ogrenci *);
void silme(struct ogrenci *);
void dosyadan_al(struct ogrenci *ogrenciler);
void dosyaya_yaz(struct ogrenci *ogrenciler);
int main(){

    struct ogrenci ogrenciler[50];
    int s,kontrol=1,secim;
    for (s=0; s<50; s++){

    strcpy(ogrenciler[s].isim,"cikis");

    }
    dosyadan_al(ogrenciler);
    while (kontrol == 1){
        menu_bas();
        scanf("%d",&secim);
        switch(secim){
        case 1:
            kayit(ogrenciler);
            break;
        case 2:
            printf("\nBasta yazan numara ogrenciye okul tarafindan verilen numaradir!!!!\n");
            goster(ogrenciler);
            break;
        case 3:
            silme(ogrenciler);
            break;
        case 4:
            hepsinisil(ogrenciler);
            break;
        case 5:
            dosyaya_yaz(ogrenciler);
            kontrol = 0;
            break;
        default:
            printf("yanlis deger girdiniz,lutfen tekrar deneyin.\nmenuye donmek icin bir tusa basin...");
            getch();
        }
    }

    return 0;
}
void menu_bas(){
    system("cls");
    printf("\t\tOgrenci Kayit Sistemine Hosgeldiniz.\n\n");
    printf("\t\t1-Ogrenci Kaydetme\n");
    printf("\t\t2-Ogrenci Gosterme\n");
    printf("\t\t3-Ogrenci Silme\n");
    printf("\t\t4-Tum verileri silme\n");
    printf("\t\t5-Programdan cikar ve verileri txt dosyasina kaydeder.\n\n");
    printf("Seciminiz:");
}
void kayit(struct ogrenci *ogrenciler){
    int s;
    for (s=0; s<50; s++){
        printf("\n%d.Ogrenci\n",s+1);
        printf("isim:");
        scanf("%s",ogrenciler[s].isim);
        if (strcmp(ogrenciler[s].isim,"cikis") == 0) break;
        printf("Bolum:");
        scanf("%s",ogrenciler[s].bolum);
        printf("Yas:");
        scanf("%d",&(ogrenciler[s].yas));
        printf("Ortalama:");
        scanf("%f",&(ogrenciler[s].ortalama));
        ogrenciler[s].no = s;
    }
    printf("\n\nVeriler islenmistir.\nMenuye donmek icin bir tusa basin.....");
    getch();
}
void goster(struct ogrenci *ogrenciler){
    int s;
    for (s=0; s<50; s++){
         if (strcmp(ogrenciler[s].isim,"cikis") == 0) break;
         printf("%d-%s   %s   %d   %f\n",s,ogrenciler[s].isim,ogrenciler[s].bolum,ogrenciler[s].yas,ogrenciler[s].ortalama);
    }
    printf("\nmenuye donmek icin bir tusa basin....");
    getch();
}
void silme(struct ogrenci *ogrenciler){
    int no,u=uzunlukbul(ogrenciler);
    printf("\nSilmek istediginiz ogrencinin okul numarasini giriniz:");
    scanf("%d",&no);
    for (no; no<u; no++){
        strcpy(ogrenciler[no].isim,ogrenciler[no+1].isim);
    }
    strcpy(ogrenciler[no].isim,"cikis");
    printf("Veri silinmistir.\nCikmak icin bir tusa basin....");
    getch();
}
int uzunlukbul(struct ogrenci *ogrenciler){
    int s,uzunluk=0;
    for (s=0; s<50; s++){
        if (strcmp(ogrenciler[s].isim,"cikis") == 0) break;
        uzunluk++;
    }
    return uzunluk;
}
void hepsinisil(struct ogrenci *ogrenciler){
    int s, u=uzunlukbul(ogrenciler);
    for (s=0; s<u; s++){
        strcpy(ogrenciler[s].isim,"cikis");
    }
    printf("Veriler silinmistir.\nCikmak icin bir tusa basin....");
    getch();
}
void dosyaya_yaz(struct ogrenci *ogrenciler){
    int s;
    FILE *txt;
    txt = fopen("liste.txt","w+");
    for (s=0; s<50; s++){
        if (strcmp(ogrenciler[s].isim,"cikis") == 0) break;
        fprintf(txt,"%d-%s   %s   %d   %f\n",s,ogrenciler[s].isim,ogrenciler[s].bolum,ogrenciler[s].yas,ogrenciler[s].ortalama);
    }
    fclose(txt);
}
void dosyadan_al(struct ogrenci *ogrenciler){
    int s;
    FILE *txt;
    txt = fopen("liste.txt","r+");
    for (s=0; s<50; s++){
        fscanf(txt,"%d-%s   %s   %d   %f\n",&(ogrenciler[s].no),ogrenciler[s].isim,ogrenciler[s].bolum,&(ogrenciler[s].yas),&(ogrenciler[s].ortalama));
        if (feof(txt)) break;
    }

    fclose(txt);
}
