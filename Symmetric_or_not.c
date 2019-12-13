#include <stdio.h>
int main(){
    printf("This program checks the square matrix that you will entire symmetric or not?\n");
    int s,i,size,flag=1;
    printf("Enter size of square matrix:");
    scanf("%d",&size);
    int matrix[size][size];
    int holder_matrix[size][size];
    for (s=0; s<size; s++){
        for(i=0 ; i<size; i++){
            printf("Enter matrix[%d][%d]:",s,i);
            scanf("%d",&matrix[s][i]);
        }
    }
    for (s=0; s<size; s++){
        for(i=0 ; i<size; i++){
            holder_matrix[s][i]=matrix[s][i];
        }
    }
    printf("\nMatrix:\n");
    for (s=0; s<size; s++){
        for(i=0 ; i<size; i++){
            printf("%d ",matrix[s][i]);
        }
        printf("\n");
    }
    for (s=0; s<size; s++){
        for(i=0 ; i<size; i++){
            matrix[s][i]=holder_matrix[i][s];
        }
    }
    printf("\Transposed Matrix :\n");
    for (s=0; s<size; s++){
        for(i=0 ; i<size; i++){
            printf("%d ",matrix[s][i]);
        }
        printf("\n");
    }
    for (s=0; s<size; s++){
        for(i=0 ; i<size; i++){
            if (matrix[s][i] != matrix[i][s]) flag =0;
        }
    }
    if (flag == 1){
        printf("\nMatrix is symmetric. \n");
    }
    else
        printf("\nMatrix is not symmetric.\n");
}
