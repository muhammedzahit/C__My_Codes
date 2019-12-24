#include <stdio.h>
#include <stdlib.h>
int main(){
    int satir,bosluk,yildiz;
    int s,i; // sayaclar
    printf("Satir sayisini giriniz:");
    scanf("%d",&satir);
    bosluk = satir-1;
    yildiz = satir;
    for (s=0; s<1; s++){
        for (i = 0 ; i< bosluk ; i++){
            printf(" ");
        }
        bosluk--;
        for (i=0; i<yildiz; i++){
            printf("*");
        }
        printf("\n");
    }

    for (s = 1; s < satir-1 ; s++){
        for (i = 0 ; i< bosluk ; i++){
            printf(" ");
        }
        bosluk--;
        for (i = 1; i<=yildiz ; i++){
            if (i == 1 || i == yildiz){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (s=satir-1; s<satir; s++){
        for (i = 0 ; i< bosluk ; i++){
            printf(" ");
        }
        bosluk--;
        for (i=0; i<yildiz; i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}