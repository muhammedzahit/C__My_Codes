#include <stdio.h>
int main(){
    printf("Bu program girdiginiz sayinin hanelerindeki en buyuk sayiyi bulur.\n");
    int sayi,basamak,s,a,max=0,tutucu;
    printf("Kac basamkli sayi gireceksiniz?    ");
    scanf("%d",&a);
    printf("Sayi:");
    scanf("%d",&sayi);
    for (s=0; s<a; s++){
        tutucu = sayi % 10;
        if (tutucu > max) max= tutucu;
        sayi /=10;
    }
    printf("En buyuk hanenin degeri:%d",max);
}
