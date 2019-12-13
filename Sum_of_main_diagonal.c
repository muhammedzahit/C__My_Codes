// SUM OF MAIN DIAGONAL
#include <stdio.h>
int main(){
    printf("Size of square matrix:");
    int size,i,j,sum=0;
    scanf("%d",&size);
    int matrix[size][size];
    for (i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("Enter matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
            if (i == j)
                sum+=matrix[i][j];
        }
    }
    for (i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of main diagonal:%d",sum);
    return 0;
}
