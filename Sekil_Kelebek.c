#include <stdio.h>
int main(){
    int girdi;
    scanf("%d",&girdi);
    int yildiz=1;
    int bosluk;
    int s,a,c;
    bosluk = (2*girdi)-2;
    for (s=0 ; s<girdi; s++){

        for(a=0 ; a<=s; a++){
            printf("*");
        }

        for (a=0; a<bosluk; a++){
            printf(" ");
        }
        for(a=0 ; a<=s; a++){
            printf("*");
        }
        bosluk-=2;
        printf("\n");

    }

    bosluk+=2;
    for (s=girdi ; s>0; s--){

        for(a=0 ; a<s; a++){
            printf("*");
        }

        for (a=0; a<bosluk; a++){
            printf(" ");
        }
        for(a=0 ; a<s; a++){
            printf("*");
        }
        bosluk+=2;
        printf("\n");

    }

}
