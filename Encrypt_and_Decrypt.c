#include <stdio.h>
int main(){
    printf("1-Encrypt Text");
    printf("\n2-Decrypt Text\n");
    printf("Selection:");
    int s,i,a;
    char text[100];
    scanf("%d",&s);
    switch(s){
    case 1:
            printf("Please give the text that will be encrypt:");
            scanf(" %[^\n]s",text);
            printf("Please give the encrypt number:");
            scanf(" %d",&a);
            for (i=0; i<100; i++){
            if (text[i] == '\0') break;
            text[i] +=a;
            }
            printf("Encrypted text:%s",text);
            break;
    case 2:
            printf("Please give the text that will be decrypt:");
            scanf(" %[^\n]s",text);
            printf("Please give the encrypt number:");
            scanf(" %d",&a);
            for (i=0; i<100; i++){
            if (text[i] == '\0') break;
            text[i] -=a;
            }
            printf("Decrypted text:%s",text);
            break;
    }
    return 0;
}
