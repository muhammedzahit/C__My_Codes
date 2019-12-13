/*
Find the Missing Number
You are given a list of n-1 integers and these integers are in the range of 1 to n. 
There are no duplicates in the list. 
One of the integers is missing in the list. 
Write an efficient code to find the missing integer.

Example :

Input: arr[] = {1, 2, 4,, 6, 3, 7, 8}
Output: 5



Input: arr[] = {1, 2, 3, 5}
Output: 4












*/
#include <stdio.h>
int main(){
    printf("Enter size of array:");
    int size;
    scanf("%d",&size);
    int i,s,hldr;
    int array[size];
    for (s=0; s<size; s++){
        printf("Enter array[%d]: ",s);
        scanf("%d",&array[s]);
    }
    for (s=1; s<size; s++){
        for (i=0; i<size-1; i++){
            if (array[i] > array[i+1]){
                hldr = array[i];
                array[i] = array[i+1];
                array[i+1] = hldr;
            }
        }
    }
    for (s=0; s<size; s++){
        if (array[s+1] != array[s]+1){
            printf("The missing number is: %d", array[s] + 1);
            break;
        }
    }
    return 0;
}
