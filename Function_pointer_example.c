#include <stdio.h>
int smallTohigh(int a,int b){
    return a>b;
}
int highTosmall(int a,int b){
    return a<b;
}
void swapElements(int *a,int *b){
    int hold= *a;
    *a = *b;
    *b = hold;
}
void putinOrder(int a[],int (*compare/*function pointer*/)(int a,int b)){
    int s,i;
    void swapElements(int*,int*);
    for (s=0; s<9; s++){
        for (i=0; i<9/*Note*/; i++){
            if ((*compare)( a[i] , a[i+1] )){
                swapElements(&a[i],&a[i+1]);
            }
        }
    }
}
void printArray(int a[]){
    for (int s=0; s<10; s++){
        printf("%d ",a[s]);
    }
    printf("\n");
}
int main(){
    int a[]={3,4,8,7,9,1,2,5,6,10};
    printArray(a);
    printf("1- Put in small to big order\n");
    printf("2- Put in big to small order\n");
    printf("Selection: ");
    int s;
    scanf("%d",&s);
    if (s == 1){
        putinOrder(a,smallTohigh/*function pointer*/);
        printArray(a);
    }
    else {
        putinOrder(a,highTosmall/*function pointer*/);
        printArray(a);
    }

    return 0;
}
// Note: If we enter here 10 in the tenth loop he try compare a[9] and a[10] but a[10] doesn't exist.
// Because of that complier give protection error  **** stack smashing detected ***: ./a.out terminated*

