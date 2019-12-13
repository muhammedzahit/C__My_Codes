// REVERSING A STRING
#include <stdio.h>
#include <string.h>
void reverse(char *array1,char *array2);
int main(){
    char string[50];
    char holderstring[50];

    printf("Enter string that you will reverse:");
    scanf("%[^\n]s",string);

    strcpy(holderstring,string);
    reverse(string,holderstring);

    printf("Your string:                    %s\n",holderstring);
    printf("New string:        %s\n",string);
    return 0;
}
void reverse(char *array1,char *array2){
    int s;
    int a= strlen(array1);
    for (s=0; s<a; s++){
        array1[s]=array2[((a-1)-s)];
    }
}
