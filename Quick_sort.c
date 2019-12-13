#include <stdio.h>
#define BOYUT 6
int array[6],i,j,pi,pivot;

int partition(int arr[],int low,int high){
    int temp;
    pivot = arr[high];
    i = low-1;
    for (j=low; j<BOYUT ; j++){
        if (pivot < array[j]){
            i++;
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }
    temp = array[i+1];
    array[i+1] = pivot;
    array[high] = temp;
    return i+1;
}

void printList(){
    printf("\nLIST =>");
    for (j = 0 ; j < BOYUT ; j++){
        printf("%d ",array[j]);
    }
    printf("\n");
}

void quickSort (int arr[],int low,int high){
    if (low < high){
        pi = partition(arr,low,high);
        printList();
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}



int main(){
    for (j=0; j<BOYUT; j++){
        printf("Enter number %d :",j+1);
        scanf("%d",&array[j]);
    }
    int low = 0,high = BOYUT;
    quickSort(array,low,high);
    printList();

}
