#include <stdio.h>
int main(){
    printf("this program gets transpose of the square matrix that you will enter.\n");
    printf("Enter size of matrix:");
    int size;
    scanf("%d",&size);
    int ctr,s;
    int matrix[size][size];
    int holder_matrix[size][size];
    for (ctr =0; ctr <size; ctr++){
        for (s=0; s <size; s++){
            printf("Enter Matrix[%d][%d]:",ctr,s);
            scanf("%d",&matrix[ctr][s]);
        }
    }
    for (ctr =0; ctr <size; ctr++){
        for (s=0; s <size; s++){
            holder_matrix[ctr][s]=matrix[ctr][s];
        }
    }
    printf("\nMatrix:\n");
    for (ctr =0; ctr <size; ctr++){
        for (s=0; s <size; s++){
            printf("%d ",matrix[ctr][s]);
        }
        printf("\n");
    }
    for (ctr =0; ctr <size; ctr++){
        for (s=0; s <size; s++){
            matrix[ctr][s]=holder_matrix[s][ctr];
        }
    }
    printf("\n");
    printf("Transposed Matrix:\n");
    for (ctr =0; ctr <size; ctr++){
        for (s=0; s <size; s++){
            printf("%d ",matrix[ctr][s]);
        }
        printf("\n");
    }
    return 0;
}
