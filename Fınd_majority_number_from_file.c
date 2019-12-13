// FIND MAJORITY NUMBER FROM TXT FILE
#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("majority.txt","r+");
    int i,a,counter=0,s=0;
    while (fscanf(fp,"%d",&a) != EOF){
        counter++;
    }
    fclose(fp); // IF WE DIDN'T CLOSE, THERE WILL BE ERROR IN NEXT FSCANF
    int array[counter];
    fp = fopen("majority.txt","r+");
    while (fscanf(fp,"%d",&array[s]) != EOF){
        s++;
    }
    fclose(fp);
    printf("\nYOUR LIST:\n");
    for (i=0; i<counter ; i++){
        printf("%d ",array[i]);
    }
    if (counter % 2 == 0){
        printf("There is no majority number in given text");
    }
    else {
        printf("\n\nMajority number is %d ",array[counter / 2]);
    }
    return 0;
}
