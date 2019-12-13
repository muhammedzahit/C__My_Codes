#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void base_Two(int a);
void base_Eight(int a);
void base_Sixteen(int a);
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Number in base 2:   ");
    base_Two(a);
    printf("Number in base 8:   ");
    base_Eight(a);
    printf("Number in base 16:  ");
    base_Sixteen(a);
    return 0;
}
void base_Two(int a){
    int *baseTwo = malloc (4*8);
    int i;
    for (i=7; i>=0; i--){
    int c= (int)pow((double)2,(double)i);
    if (a/c == 1){
        baseTwo[i] = 1;
        a -=c;
    }
    else{
        baseTwo[i] = 0;
    }
    }
    for (i=7; i>=0; i--){
        printf("%d",baseTwo[i]);
    }
    printf("\n");
    free(baseTwo);
}
void base_Eight(int a){
    int *base_eight= malloc(4*3);
    int i;
    for (i=2 ; i>=0; i--){
            int power= (int)pow((double)8,(double)i);
            base_eight[i] = a/power;
            a -= (a/power)*power;
    }
    for (i=2; i>=0; i--){
        printf("%d",base_eight[i]);
    }
    printf("\n");
    free(base_eight);
}
void base_Sixteen(int a){
    int *base_sixteen = malloc(4*2);
    int i;
    for (i=1; i>=0; i--){
        int power= (int)pow((double)16,(double)i);
        if (a/power < 9){
            base_sixteen[i] = a/power;
            printf("%d",base_sixteen[i]);
            a -= (a/power)*power;
        }
        else if (a/power == 11){
            base_sixteen[i] = 66;
            a-= (a/power)*power;
            printf("%c",base_sixteen[i]);
        }
        else if (a/power == 12){
            base_sixteen[i] = 67;
            a-= (a/power)*power;
            printf("%c",base_sixteen[i]);
        }
        else if (a/power == 13){
            base_sixteen[i] = 68;
            a-= (a/power)*power;
            printf("%c",base_sixteen[i]);
        }
        else if (a/power == 14){
            base_sixteen[i] = 69;
            a-= (a/power)*power;
            printf("%c",base_sixteen[i]);
        }
        else if (a/power == 15){
            base_sixteen[i] = 70;
            a-= (a/power)*power;
            printf("%c",base_sixteen[i]);
        }

    }
    printf("\n");
    free(base_sixteen);
}
