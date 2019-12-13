// RECURSIVE FUNCTION THAT FINDS GCD(GREATEST COMMON DIVISOR)
#include <stdio.h>
int gcd(int num1,int num2){
    if (num1 > num2){
        if (num1 % num2 == 0){
            return num2;
        }
        else {
            return gcd(num1%num2,num2);
        }
    }
    if (num2 > num1){
        if (num2 % num1 == 0){
            return num1;
        }
        else{
            return gcd(num2%num1,num1);
        }
    }
}
int main(){
    int num1,num2;
    printf("This program calculates GCD(Greatest Common Divisor)\n");
    printf("Enter number 1:  ");
    scanf("%d",&num1);
    printf("Enter number 2:  ");
    scanf("%d",&num2);
    printf("GCD : %d",gcd(num1,num2));
    return 0;
}
