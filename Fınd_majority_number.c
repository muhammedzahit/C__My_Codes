// FIND MAJORITY NUMBER 
#include <stdio.h>
int main(){
    int *array;
    int s=0;
    array = malloc(4*1);
    do{
        printf("Enter array[%d]:",s);
        scanf("%d",&array[s]);

        if (array[s] != -1){

            array = realloc(array,(s+1)*4);
        }
        s++;

    }while(array[s-1] != -1);
    s--;
    int b= (s/2);
    if (s % 2 == 0){
        printf("There is no majority number.");
    }
    else {
        printf("Majority number is %d",array[b]);
    }
    free(array);
    return 0;
}
