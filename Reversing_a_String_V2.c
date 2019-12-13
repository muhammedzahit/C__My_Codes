#include <stdio.h>
void reverse (char * strng){
    if (strng[0] == '\0'){
        return ;
    }
    else {
        reverse(&strng[1]);
        printf("%c",strng[0]);
    }
}
int main(){
    char array[100];
    puts("enter a text line\n");
    fgets(array,100,stdin);
    puts("reversed text line\n");
    reverse(array);
    return 0;
}
