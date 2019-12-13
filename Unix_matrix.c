#include <stdio.h>
int main(){
    printf("how many digit in unix matrix?    ");
    int a,i,b;
    scanf("%d",&a);
    int matrix[a][a];
    for (i=0 ; i<a; i++){
        for(b =0 ; b<a; b++){
            matrix[i][b]=0;
        }
    }
    for (i=0 ; i<a; i++){
        matrix[i][i]=1;
    }
    for (i=0 ; i<a; i++){
        for(b =0 ; b<a; b++){
            printf("%d ",matrix[i][b]);
        }
        printf("\n");
    }
    return 0;
}
