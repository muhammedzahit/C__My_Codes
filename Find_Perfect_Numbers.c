// THIS PROGRAM FINDS PERFECT NUMBERS
#include <stdio.h>
int sum_of_divisors(int *number){
    int sum=0,s;
    for (s=1; s<number ; s++){
        if (number % s == 0){
            sum += s;
        }
    }
    return sum;
}
int main(){
    printf("Enter number:");
    int number,i;
    scanf("%d",&number);
    printf("\nPerfect Numbers:\n");
    for (i=1; i<=number ; i++){
        if (i == sum_of_divisors(&i)){
            printf("%d\n",i);
        }
    }
    return 0;
}

