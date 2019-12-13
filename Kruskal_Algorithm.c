// KRUKSKAL ALGORITHM
#include <stdio.h>
#include <stdlib.h>

void swap(int *kimden,int *kime){
    int temp = *kimden;
    *kimden = *kime;
    *kime = temp;
}

int main(){
    FILE *fp = fopen("C:\\Projects\\c-lion-c\\info.txt","r+");
    int kenar_s,dugum_s;
    fscanf(fp,"%d",&dugum_s);
    fscanf(fp,"%d",&kenar_s);
    printf("%d %d\n",dugum_s,kenar_s);
    int * dolasilan = (int *)malloc(sizeof(int) * dugum_s);
    int * kimden = (int *)malloc(sizeof(int) * kenar_s);
    int * kime = (int *)malloc(sizeof(int) * kenar_s);
    int * agirlik = (int *)malloc(sizeof(int) * kenar_s);
    int i=0,j=0;
    while(!feof(fp)){
        fscanf(fp,"%d %d %d",&kimden[i],&kime[i],&agirlik[i]);
        i++;
    }
    for (i = 0; i<kenar_s; i++){
        printf("%d %d %d\n",kimden[i],kime[i],agirlik[i]);
    }
    for (i = 0; i<dugum_s; i++){
        dolasilan[i] = 0;
    }
    printf("\n\n");
    for (i = 0; i<kenar_s-1; i++){
        for(j=i ; j<kenar_s; j++){
            if (agirlik[j] < agirlik[i]){
                swap(&kimden[i],&kimden[j]);
                swap(&kime[i],&kime[j]);
                swap(&agirlik[i],&agirlik[j]);
            }
        }
    }
    for (i = 0; i<kenar_s; i++){
        printf("%d %d %d\n",kimden[i],kime[i],agirlik[i]);
    }
    printf("\n\n");
    printf("Alinan Dugumler:\n");
    for (i=0; i<kenar_s; i++){
        if (dolasilan[kimden[i]] == 0 || dolasilan[kime[i]] == 0){
            printf("%d %d %d\n",kimden[i],kime[i],agirlik[i]);
            dolasilan[kimden[i]] = 1;dolasilan[kime[i]]=1;
        }
    }
    fclose(fp);
    return 0;
}