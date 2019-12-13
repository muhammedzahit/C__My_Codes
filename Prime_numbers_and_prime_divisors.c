#include <stdio.h>
int s;
int main(){
    int dizi[100];
    int n,i,flag=0,a=0,b=0;
    scanf("%d",&n);
    for (i =2; i<n; i++){
        flag = 0;
        for(s=2; s<i; s++){
            if (i % s == 0) flag = 1;
        }
        if (flag == 0){
            dizi[a]=i;
            a++;
        }
    }
    printf("Prime numbers that smaller than %d:\n",n);
    for (s=0; s<a; s++){
        printf("%d\n",dizi[s]);
    }
    printf("number of prime numbers;%d\n",a);
    for (s=0; s<a; s++){
        if (n % dizi[s] == 0){
            printf("%d ",dizi[s]);
            b++;
        }
    }
    if ( b == 1){
        printf(" is prime divisor.");
    }
    else{
        printf(" are prime divisors.");

    }
}
