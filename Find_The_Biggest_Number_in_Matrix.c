#include <stdio.h>
#include <conio.h>
int main(){
    int big=0,column,row,i,j,holder[2];
    printf("Number of column:");
    scanf("%d",&column);
    printf("Number of row:");
    scanf("%d",&row);
    int matrix[column][row];
    for (i=0; i<column ; i++){
        for (j=0; j<row; j++){
            printf("Matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (i=0; i<column ; i++){
        for (j=0; j<row; j++){
            if (matrix[i][j]> big){
                big = matrix[i][j];
                holder[0] =i;
                holder [1] = j;
            }
        }
    }
    for (i=0; i<column ; i++){
        for (j=0; j<row; j++){
            printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
    printf("Finding The Biggist Number.........\n");
    printf("Done! Press a key... ");
    getch();
    printf("\nThe biggest Number:%d\n",big);
    printf("Column Adress:%d",holder[0]);
    printf("\nRow Adress:%d",holder[1]);
}
