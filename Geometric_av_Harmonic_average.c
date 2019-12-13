#include <math.h>
#include <stdio.h>
int main(){
    int number,i,sum=0;
    printf("Enter size of matrix:");
    scanf("%d",&number);
    int matrix[number];
    for (i=0 ; i<number; i++){
        printf("Enter matrix[%d]:",i);
        scanf("%d",&matrix[i]);
        sum += matrix[i];
    }
    float average = (float)sum/number;
    float holder = 1.0/number,holder2=1,holder3=0;
    for (i=0 ; i<number; i++){
        holder2 *= matrix[i];
    }
    float geometric = pow(holder2,holder);
    for (i=0 ; i<number; i++){
        holder3 += 1.0/matrix[i];
    }
    float harmonic = number / holder3;
    printf("AVERAGE:%f\n",average);
    printf("GEOMETRIC:%f\n",geometric);
    printf("HARMONIC:%f",harmonic);

    return 0;
}
