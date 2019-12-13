/*Find the Number Occurring Odd Number of Times
Given an array of positive integers. All numbers occur even number of times except one number which occurs odd number of times. Find the number in O(n) time & constant space.
Examples :

Input : arr = {1, 2, 3, 2, 3, 1, 3}
Output : 3

Input : arr = {5, 7, 2, 7, 5, 2, 5}
Output : 5 */
#include <stdio.h>
int main(){
    int size;
    int s,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    int array[size];
    for (s=0; s<size; s++){
        printf("Enter array[%d]:",s);
        scanf("%d",&array[s]);
    }
    for (s=0; s<size; s++){
        int rep=1;
        for (i=s+1; i<size; i++){
            if (array[s] == array[i]){
                rep++;
            }
        }
        for (i=0; i<s ; i++ ){
            if (array[i] == array[s]){
                rep++;
            }
        }
        if (rep % 2 == 1){
            printf("Odd repeated number is: %d",array[s]);
        }
    }
    return 0;
}
