#include <stdio.h>
#include <string.h>
int str_len(char *girdi);
void kontrol(char *girdi);
int main(){
    char kelime[50];
    char kontroldizisi[50];
    printf("bu programda girdiginiz kelime polindrom mu kontrol edilecektir.\n");
    printf("Kelime:");
    gets(kelime);
    strcpy(kontroldizisi,kelime);
    kontrol(kelime);
    if (strcmp(kelime,kontroldizisi) == 0)
        printf("girdiginiz kelime polindromdur.");
    else
        printf("girdiginiz kelime polindrom degildir.");
    return 0;

}
int str_len(char *girdi){
    char *kelime =girdi;
    int uzunluk=0;
    while (*kelime != '\0'){
        uzunluk++;
        kelime++;
    }
}
void kontrol(char *girdi){
    char *kelime = girdi;
    int a= str_len(kelime);

    int s;
    for (s=0;s<a;s++){
        kelime[s]=kelime[((a-1)-s)];
    }

}
