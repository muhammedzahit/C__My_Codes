#include <stdio.h>
int main(){
    int i,j,clmn,row;
    printf("Number of column:");
    scanf("%d",&clmn);
    printf("Number of row:");
    scanf("%d",&row);
    int matrix[clmn][row];
    int matrix2[clmn][row];
    printf("\nMatrix 1\n");
    for (i=0; i<clmn; i++){
        for(j=0; j<row; j++){
            printf("Matrix 1[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nMatrix 2\n");
    for (i=0; i<clmn; i++){
        for(j=0; j<row; j++){
            printf("Matrix 2[%d][%d]:",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    int sum_matrix[clmn][row];
    for (i=0; i<clmn; i++){
        for(j=0; j<row; j++){
            sum_matrix[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    printf("\nSum of Matrices\n");
    for (i=0; i<clmn; i++){
        for(j=0; j<row; j++){
            printf("%d ",sum_matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
