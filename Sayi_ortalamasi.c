//merhaba.txt deki sayilarin ortalamasini alir ve ortalama.txt adli dosyaya yazar.
#include <stdio.h>
int main(){
    FILE *isaretci;
    int sayac;
    int kacsayi;
    int toplam=0;
    isaretci = fopen("merhaba.txt","r+");
    fscanf(isaretci,"%d",&kacsayi);
    int dizi[kacsayi];
    for (sayac=0; sayac<kacsayi ; sayac++ ){
        fscanf(isaretci,"%d",&dizi[sayac]);
        toplam +=dizi[sayac];
    }
    float ortalama;
    ortalama = toplam /(float)kacsayi;
    FILE *isaretci2;
    isaretci2 = fopen("ortalama.txt","w+");
    fprintf(isaretci2,"ORTALAMA:%f",ortalama);
    fclose(isaretci2);
    fclose(isaretci);
    return 0;
}
