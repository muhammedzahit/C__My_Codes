#include <stdio.h>
int main(){
    int yildiz,giris,bosluk,a,b,c;
    printf("kac basamakli?   ");
    scanf("%d",&giris);
    yildiz=1;
    bosluk= giris-1;
    for(a=0; a<giris; a++){
        for(b=0;b<bosluk;b++){
            printf(" ");
        }
        for(c=0; c<yildiz;c++){
            printf("*");
        }
        for(b=0; b<(bosluk*2);b++){
            printf(" ");
        }
        for(c=0; c<yildiz;c++){
            printf("*");
        }
        printf("\n");
        bosluk--;
        yildiz+=2;
    }
    bosluk+=2;
    yildiz-=4;
    for(a=0; a<giris; a++){
        for(b=0;b<bosluk;b++){
            printf(" ");
        }
        for(c=0; c<yildiz;c++){
            printf("*");
        }
        for(b=0;b<(bosluk*2);b++){
            printf(" ");
        }
        for(c=0;c<yildiz;c++){
            printf("*");
        }
        printf("\n");
        bosluk++;
        yildiz-=2;
    }
    return 0;
}
