// FİND SUM IN ARRAY
#include <stdio.h>
int main(){
    int size,s,i,sum;
    printf("Enter size of array:");
    scanf("%d",&size);
    int array[size];
    printf("Enter sum that you are looking for:");
    scanf("%d",&sum);
    for (s=0; s<size; s++){
        printf("Enter array[%d]:",s);
        scanf("%d",&array[s]);
    }
    printf("Your array:\n");
    for (s=0; s<size; s++){
        printf("%d ",array[s]);
    }
    printf("\n");
    for (s=0; s<size-1; s++){
        for (i=s+1; i<size; i++){
            int a = array[s] + array[i];
            if (a == sum){
                printf("[%d.index] + [%d.index] = %d",s,i,sum);
                printf("\n%d + %d = %d\n\n",array[s],array[i],sum);
            }
        }
    }
    return 0;
}
