//PRİME NUMBER - PRİME DİVİSOR
#include <stdio.h>
#include <stdlib.h>
int arrayLen;
int primeDivisorLen;
int *findPrimeNum(int number);
int* findPrimeDivisor(int number,int array[],int arrayLen);
int main(){
    int number,s;
    printf("Enter number:");
    scanf("%d",&number);
    int *array=findPrimeNum(number);
    printf("Prime Numbers:\n");
    for (s=0; s<arrayLen-1; s++){
        printf("%d\n",array[s]);
    }
    printf("\n");
    int *primeDivisor = findPrimeDivisor(number,array,arrayLen);
    printf("Prime Divisors:\n");
    for(s=0; s<primeDivisorLen-1; s++){
        printf("%d\n",primeDivisor[s]);
    }
    free(array);
    free(primeDivisor);
    return 0;
}
int *findPrimeNum(int number){
    int *array = malloc(4);
    arrayLen=1;
    int i,s,counter;
    for (s=1; s<=number; s++){
        counter = 0;
        for (i = 1; i<= s ; i++){
            if (s % i == 0)
                counter++;
        }
        if (counter == 2){
            if (arrayLen > 1){
                array = realloc(array,arrayLen*4);
            }
            array[arrayLen-1] = s;
            arrayLen++;
        }
    }
    return array;
}
int* findPrimeDivisor(int number,int array[],int arrayLen){
    int *primeDivisor = malloc (4);
    primeDivisorLen = 1;
    int s;
    for (s=0; s<arrayLen-1 ; s++){
        if (number % array[s] == 0){
            if (primeDivisorLen > 1){
                primeDivisor = realloc(primeDivisor,4*primeDivisorLen);
            }
            primeDivisor[primeDivisorLen-1] = array[s];
            primeDivisorLen++;
        }
    }
    return primeDivisor;
}

