#include <stdio.h>
int main(){
    printf("Enter a number:");
    int number;
    scanf("%d",&number);
    int display_max = 1<<31;
    int s;
    for (s=0; s<32; s++){
        printf("%c",number&display_max ? '1' : '0');
        number <<= 1;
        if (((s+1) % 4) == 0) printf(" ");
    }
    return 0;
}
