/*
Largest Sum Contiguous Subarray
Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.
















*/
#include <stdio.h>
int main(){
    int size,size2;
    printf("Enter size of array:");
    scanf("%d",&size);
    int array[size];
    int s,i,holder;
    for (s=0; s<size; s++){
        printf("Enter array[%d]:",s);
        scanf("%d",&array[s]);
    }
    printf("Enter size of sum:");
    scanf("%d",&size2);
    for (s=1; s<size; s++){
        for (i=0; i<size-1; i++){
            if (array[i] < array[i+1]){
                holder = array[i];
                array[i] = array[i+1];
                array[i+1] = holder;
            }
        }
    }
    int sum=0;
    for (s=0; s<size2; s++){
        sum += array[s];
    }
    printf("Biggest sum in array is %d\n",sum);
    printf("(");
    for (s=0; s<size2-1; s++){
        printf(" %d +",array[s]);
    }
    printf(" %d)",array[size2-1]);
    return 0;
}
