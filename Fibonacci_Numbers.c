// FIBONACCI NUMBERS
#include <stdio.h>
int main(){
    int size,i,j;
    printf("How many fibonacci numbers do you want?   ");
    scanf("%d",&size);
    double fibonacci[size];
    fibonacci[0]= 1;
    fibonacci[1]= 1;
    for (i=2; i<size; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    for (i=0 ; i<size ; i++){
        printf("Fibonacci  number %3d:       %.0f\n",i+1,fibonacci[i]);
    }
    return 0;
}
