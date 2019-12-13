// INSERTION SORT
#include <stdio.h>
#define BOYUT 8
int array[BOYUT] = {4,3,2,10,12,1,5,6};

void printList() {
    int i;
    printf("LIST => ");
    for (i=0 ; i<BOYUT ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void swap(int j,int i){
    int s,temp;
    for (s=i; s>j ;s--){
        temp = array[s];
        array[s] = array[s-1];
        array[s-1] = temp;
    }
}

void insertionSort(){
    int temp,i,j;
    for (i = 1; i<BOYUT; i++){
        for (j=0 ; j<i ; j++){
            if (array[i] < array[j] ){
                swap(j,i);
                printList();
                break;
            }
        }
    }
}

int main(){

    insertionSort();
    printList();
    return 0;
}
