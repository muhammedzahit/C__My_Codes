#include <stdio.h>
#include <stdlib.h>
int findNumber(int *array,int number,int low,int high);
int main(){
    int number,s;
    int *array= malloc(15*4);
    for (s=0; s<15; s++){
        array[s] = 2*s;
    }
    for (s=0; s<15; s++){
        printf("%d\n",array[s]);
    }
    printf("Enter number that you are looking for:  ");
    scanf(" %d",&number);
    int result = findNumber(array,number,0,15);
    if (result != -1){
        printf("We find your number\nYour number is %d element in array",result);
    }
    else {
        printf("Sorry we didn't find your number");
    }
    free(array);
    return 0;
}
int findNumber(int *array,int number,int low,int high){
    int middle;
    while (low <= high){
        middle = (low+high)/2;
        if (number == array[middle]){
            return middle;
        }
        if (number > array[middle]){
            low = middle+1;
        }
        if (number < array[middle]){
            high = middle-1;
        }
    }
    return -1;
}

