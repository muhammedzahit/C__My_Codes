#include <stdio.h>
int main(){
    int number,min=1000,column,row,i,j,hldr1,hldr2;
    printf("Enter number:");
    scanf("%d",&number);
    printf("Enter column of matrix:");
    scanf("%d",&column);
    printf("Enter row of matrix:");
    scanf("%d",&row);
    int matrix[column][row];
    for (i=0; i<column ; i++){
        for (j=0; j<row ; j++){
            printf("Enter matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (i=0; i<column ; i++){
        for (j=0; j<row ; j++){
            if (min > absolute((number - matrix[i][j]))){
                min = absolute((number - matrix[i][j]));
                hldr1 = i;
                hldr2 = j;
            }
        }
    }
    printf("The nearest number in matrix to your number is %d\n",matrix[hldr1][hldr2]);
    printf("Difference among them: %d ",min);
}
int absolute(int sayi){
    if (sayi < 0) sayi*= -1;
    else return sayi;
    return sayi;
}
