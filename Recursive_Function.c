//RECURSIVE FUNCTION TO FIND A NUMBER IN A GIVEN ARRAY
#include <stdio.h>
int searchInArray(int array[],int start,int end,int number);
int s;
int main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int array[size];
    for (s=0; s<size ; s++){
        printf("Enter array[%d]:",s);
        scanf("%d",&array[s]);
    }
    int number;
    printf("Enter number that you are looking for:");
    scanf("%d",&number);
    int a= searchInArray(array,0,size-1,number);
    if (a == -1){
        printf("\nWe didn't find that number in given array.\n");
    }
    else {
        printf("\nThe given number %d element of array\n",a);
    }
    return 0;
}
int searchInArray(int array[],int start,int end,int number){
    if (end < 1){
        return -1;
    }
    if (array[start] == number){
        return start;
    }
    if (array[end] == number){
        return end;
    }
    return searchInArray(array,(start+1),(end-1),number);
}
