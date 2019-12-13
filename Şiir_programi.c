#include <stdio.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));
    char article[2][20]={"ne","bir"};
    char noun[4][20]={"hasta", "kadin", "adam", "cocuk"};
    char verbs[5][20]={"durdu", "daldi", "gitti", "carpti","sendeledi"};
    char preposition[5][20]={"sevgiliye", "uzaklara", "duvarlara", "karanliklara","dusuncelere"};

    int a,b,c,d; //RANDOM NUMBERS
    int e=0;

    while(1){
        a = rand()%2;
        b = rand()%4;
        c = rand()%5;
        d = rand()%5;
        printf("%s %s %s %s.\n",article[a],noun[b],verbs[c],preposition[d]);
        e++;
        if (e == 4) break;
    }


    return 0;
}
