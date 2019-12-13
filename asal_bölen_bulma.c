#include <stdio.h>

int asal_mi(int *b){
    int i,counter=0;
    for (i = 1; i<=*b; i++){
        if ((*b) %i == 0) counter++;
    }
    return counter==2 ? 1: 0;
}

void asal(int a){

    int i;
    int loop = a;
    for (i=2; i<loop; i++){
        if (!asal_mi(&i)) continue;
        if (a % i == 0){
            printf("%d ",i);
            a/= i;
            while (a % i == 0) a/= i;
        }
        if (a <= 1) break;
    }

}

int main(){
    asal(147);
    return 0;
}