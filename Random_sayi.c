#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL));
    int a;
    printf("kac elemanli random dizi olusturmak istersin?  ");
    scanf("%d",&a);
    int dizi[a];
    for (int b=0; b<a ; b++){
        dizi[b]=rand();
    }
    for (int b=0; b<a ; b++){
        printf("%d\n",dizi[b]);
    }
    return 0;
}
