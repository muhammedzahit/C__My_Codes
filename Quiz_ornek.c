/* Kullanıcıdan iki sayi alinacaktir. Bu sayilardan ilki yazdirilacak
matrisin satir sayisini ikincisi ise sutun sayisini gosterir. 
Matrisin elemanlari 1 0 1 0 .. seklinde gidecektir.
Ornegin (5,4) matrisi
1 0 1 0
0 1 0 1
1 0 1 0 
0 1 0 1
1 0 1 0
seklinde olmalidir. */


#include <stdio.h>
int main(){
    int satir,sutun,i,j,kontrol=0;
    printf("Satir sayisi:");
    scanf("%d",&satir);
    printf("Sutun sayisi:");
    scanf("%d",&sutun);
    for (i=0 ; i<satir ; i++){
        printf("%d.satir kontrol=%d\n",i+1,kontrol);
        for (j=0 ; j<sutun; j++){
          if (kontrol == 0){
            printf("%d ",kontrol);
            kontrol++;
          }
          else {
            printf("%d ",kontrol);
            kontrol--;
          }
        }
        printf("\n");
    }
    return 0;
}
