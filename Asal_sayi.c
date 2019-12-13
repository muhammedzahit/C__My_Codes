#include<stdio.h>
void main()
{
    int n,i,flag=0,j,dizi[100],s=0;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=2; i<n; i++)
    {
        for(j=2; j<i; j++)
            if (i % j == 0)
                flag=1;
        if (flag == 0){
            printf("%d ",i);
            dizi[s]=i;
            s++;
        }
    flag =0;
    }
    printf("how many numbers:%d\n",s);
    for (i=0; i<s; i++){
        if (n%dizi[i] == 0) printf("%d  ",dizi[i]);
    }
    getch();
}
