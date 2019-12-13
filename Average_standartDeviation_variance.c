#include <stdio.h>
#include <math.h>
int main(){
    int i,number;
    float average,variance,standartDeviation,sum=0.0;
    printf("Enter size of matrix:");
    scanf("%d",&number);
    int matrix[number];
    for (i=0 ; i<number ; i++){
        printf("Enter matrix[%d]:",i);
        scanf("%d",&matrix[i]);
        sum += matrix[i];
    }
    average = sum / number;
    sum = 0.0;
    for (i=0 ; i<number ; i++){
        sum += (float)pow((double)(average - matrix[i]),(double)2);
    }
    variance = sum/ number;
    standartDeviation = (float)sqrt((double) variance);
    printf("AVERAGE:%f",average);
    printf("\nSTANDART DEVIATION:%f\n",standartDeviation);
    printf("VARIANCE:%f",variance);
    return 0;
}
