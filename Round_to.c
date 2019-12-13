#include <stdio.h>
int toInteger (float sayi){
    sayi = floor(sayi + .5);
    return (int)sayi;
}
float toTenths (float sayi){
    sayi *= 10;
    sayi = floor(sayi + .5);
    sayi /= 10;
    return sayi;
}
float toHundereths (float sayi){
    sayi *= 100;
    sayi = floor(sayi + .5);
    sayi /= 100;
    return sayi;
}
float toThousandths (float sayi){
    sayi *= 1000;
    sayi = floor(sayi + .5);
    sayi /= 1000;
    return sayi;
}
int main(){
    printf("Enter float number:");
    float number;
    scanf("%f",&number);
    printf("Round to integer:        %d\n",toInteger(number));
    printf("Round to Tenth:          %.1f\n",toTenths(number));
    printf("Round to Hundereth:      %.2f\n",toHundereths(number));
    printf("Round to Thousandth:     %.3f\n",toThousandths(number));
    return 0;
}
