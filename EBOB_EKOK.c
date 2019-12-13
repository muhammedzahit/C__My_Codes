#include <stdio.h>
int ekok(int a,int b){
    int i;
    if (a > b) i = a;
    else i = b;
    for (i; i<=a*b; i++){
        if (i % a == 0 && i % b == 0) return i;
    }
}
int ebob(int a,int b){
    int i;
    if (a < b) i=a;
    else i=b;
    for(i; i>0; i--){
        if (a%i == 0 && b%i == 0 ) return i;
    }
}
int main(){
    int a,b;
    printf("EBOB-EKOK almak istediginiz sayilari aralarina ve yazarak giriniz.(8 ve 12 seklinde)\n");
    scanf("%d ve %d",&a,&b);
    printf("EKOK:%d\n",ekok(a,b));
    printf("EBOB:%d",ebob(a,b));
    return 0;
}
