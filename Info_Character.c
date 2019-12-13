#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void controlTypeCharecter(char *chrctr);

int main()
{
    char chrctr;
    printf("Enter a character:");
    scanf(" %c",&chrctr);
    controlTypeCharecter(&chrctr);
    return 0;
}
void controlTypeCharecter(char *chrctrptr){
    printf("\nif circumstance is true return 1\nif not return 0\n\n\n");
    printf("is lower letter ?                               %s\n",islower(*chrctrptr) ? "1" : "0");
    printf("is upper letter ?                               %s\n",isupper(*chrctrptr) ? "1" : "0");
    printf("is digit ?                                      %s\n",isdigit(*chrctrptr) ? "1" : "0");
    printf("is letter ?                                     %s\n",isalpha(*chrctrptr) ? "1" : "0");
    printf("is letter or digit ?                            %s\n",isalnum(*chrctrptr) ? "1" : "0");
    printf("is hexadecimal ?                                %s\n",isxdigit(*chrctrptr)? "1" : "0");
    if (isupper(*chrctrptr) == 0){
        printf("Upper version :                                 %c\n",toupper(*chrctrptr));
    }
    else {
        printf("Lower version :                                 %c\n",tolower(*chrctrptr));
    }
    printf("is form space characters                        %s\n",isspace(*chrctrptr)? "1" : "0");
    printf("is control character                            %s\n",iscntrl(*chrctrptr)? "1" : "0");
    printf("is punctuation character                        %s\n",ispunct(*chrctrptr)? "1" : "0");
    printf("is printable character(space included)?         %s\n",isprint(*chrctrptr)? "1" : "0");
    printf("is printable character(space not included)?     %s\n",isgraph(*chrctrptr)? "1" : "0");
}
