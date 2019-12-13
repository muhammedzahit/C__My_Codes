// RECURSIVE POWER FUNCTION
#include <stdio.h>
double power(double number,int exponent){
    if (exponent == 0)
        return 1.00;
    else {
        return number*power(number,exponent-1);
    }
}
int main(){
    printf("Enter double number:");
    double number;
    scanf("%lf",&number);
    printf("Enter exponent:");
    int exponent;
    scanf("%d",&exponent);
    printf("Result: %.2lf",power(number,exponent));
    return 0;
}

