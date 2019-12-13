#include <stdio.h>
int main(){
    int s,a,big=0,holder;
    int dizi[]={1,3,4,3,5,3,2,8,2};
    for (s=0; s<(sizeof(dizi)/4)-1; s++){
        int i=0;
        for(a=s+1 ; a<(sizeof(dizi)/4); a++){
            if (dizi[s] == dizi[a]) i++;
        }
        if (i > big){
            big = i;
            holder = dizi[s];
        }
    }
    printf("%d\n",eb+1);
    printf("%d",holder);
}
