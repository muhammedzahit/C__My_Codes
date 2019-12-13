#include <stdio.h>
int main(){
    int number,k,sum=0;
    printf("Enter number:");
    scanf("%d",&number);
    while (number > 0){
        k = number %10;
        number /= 10;
        sum += k;
    }
    printf("FIGURES SUM:%d",sum);
}
