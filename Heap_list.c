#include <stdio.h>
#define BOYUT 7
int array[BOYUT];
int c;
int main(){
    int i,temp,root;
    for (i = 0; i < BOYUT; ++i) {
        printf("Enter number %d:",i+1);
        scanf("%d",&array[i]);
    }
    // for icin kullandigin degeri degistirme sonra hata cikiyor!
    for (i=1 ; i<BOYUT ; i++){
        c = i;
        do{
            root = (c-1)/2; // find parent
            if (array[c] > array[root]){
                temp = array[root];
                array[root] = array[c];
                array[c] = temp;
            }
            c = root; // new parent is child
        }while(c != 0);
    }
    printf("\nMAX HEAP\n");
    for (i=0; i<BOYUT; i++){
        printf("%d ",array[i]);
    }

    for (i=BOYUT-1 ; i>= 0; i--){
        root = 0;
        temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        c = -1; // this is needed for program run properly
        while ( c < i){
            c = 2*root+1; // find left child
            // find which child is bigger:
            if (array[c] < array[c+1] && c+1 < i /*is c+1 exist ? */){
                c++;
            }
            // if child is bigger than root rearrange
            if (array[c] > array[root] && c < i /*if c bigger than i ,program crush */){
                temp = array[root];
                array[root] = array[c];
                array[c] = temp;
            }
            root = c; // new root is child
        }
    }
    printf("\nSORTED LIST\n");
    for (i=0; i<BOYUT; i++){
        printf("%d ",array[i]);
    }
}