// RADIX SORT
#include <stdio.h>
#define BOYUT 8

int array[BOYUT] = {170, 45, 75, 90, 802, 24, 2, 66};

int find_max(){
    int i;
    int max = array[i];
    for (i=1; i<BOYUT; i++){
        if (array[i] > max) max = array[i];
    }
    return max;
}

void radix_sort(int exp){
    int count[10] = {0};
    int output[BOYUT],i;
    for (i=0; i<BOYUT ; i++){
        count[(array[i]/exp)%10]++;
    }
    for (i=1; i<10 ;i++){
        count[i] += count[i-1];
    }
    for (i = BOYUT-1 ; i >= 0 ; i--){
        output [ count [ (array[i]/exp) %10] - 1 ] = array[i];
        count[(array[i]/exp)%10]--;
    }
    for (i=0; i<BOYUT ; i++){
        array[i] = output[i];
    }
}

void radix(){
    int max = find_max(),i;
    for (i=1; max/i > 0 ; i*= 10){
        radix_sort(i);
    }
}

void printList(){
    int i;
    for (i=0; i<BOYUT ; i++){
        printf("%d ",array[i]);
    }
}

int main(){
    radix();
    printList();
    return 0;
}