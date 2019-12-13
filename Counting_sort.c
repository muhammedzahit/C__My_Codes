// COUNTING SORT
#include <stdio.h>
#define BOYUT 7

int array[BOYUT] = {1,4,1,2,7,5,2};


int find_max(){
    int i;
    int max = array[0];
    for (i = 1; i <BOYUT ; ++i) {
        if (array[i] > max) max = array[i];
    }
    return max;
}

void counting_sort(){
    int i,j = find_max()+1;
    int counter[j];
    for (i = 0 ; i<j ; i++){
        counter[i] = 0;
    }
    for (i=0 ; i<BOYUT ; i++){
        counter[array[i]]++;
    }
    for (i = 1; i<j ; i++){
        counter[i] += counter[i-1];
    }
    for (i=0; i<BOYUT ; i++){
        array[counter[array[i]] - 1] = array[i];
        counter[array[i]]--;
    }
}

void printList(){
    int i;
    for (i=0; i<BOYUT ; i++){
        printf("%d ",array[i]);
    }
}

int main(){
    counting_sort();
    printList();
    return 0;
}