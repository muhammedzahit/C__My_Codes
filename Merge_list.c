#include <stdio.h>

#define BOYUT 11

int a[BOYUT] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[BOYUT];


void printList(){
    int i;
    for (i=0; i<BOYUT; i++){
        printf("%d ",a[i]);
    }
}

void mergening(int low,int max, int mid){
    int i;
    int l1 = low;
    int l2 = mid+1;
    for (i=low; l1<=mid && l2<=max ; i++ ){
        if (a[l1] <= a[l2]){
            b[i] = a[l1++];
        }
        else
            b[i] = a[l2++];
    }
    while (l1 <= mid){
        b[i++] = a[l1++];
    }
    while (l2 <= max){
        b[i++] = a[l2++];
    }
    for (i = low; i<=max ; i++){
        a[i] = b[i];
    }
}

void merge_sort(int low,int max){
    if (low < max){
        int mid = (max+low)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,max);
        mergening(low,max,mid);
    }
}



int main(){
    merge_sort(0,BOYUT-1);
    printList();
    return 0;
}