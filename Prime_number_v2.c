#include <stdio.h>
int main(){
    int number,s,flag=0;
    scanf("%d",&number);
    if (number < 0){
        printf("You must enter positive value:   ");
        scanf("%d",&number);
    }
    for (s=2; s<=(number/s) ; s++){
        if (number%s == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        printf("Not prime number");
    }
    else {
        if (number == 1){
            printf("Not prime number");
        }
        else {
            printf("Prime number");
        }
    }
    return 0;
}
