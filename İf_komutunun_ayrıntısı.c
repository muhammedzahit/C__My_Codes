#include <stdio.h>
int main(){
    int a=12 , b=8;
    if (a=b) printf("%d",a*b);
    else printf("%d",a-b);
    return 0;
    /* burada program 64 basacaktır.
    Çünkü if komutunun içinde tek eşitlik varsa bu işlem karşılaştırma işlemi değil
    eşitleme işlemidir. Yani a'yı b'nin değerine eşitler. (a=8(b))
    Bu nedenle output 64 olacaktır.*/
}
