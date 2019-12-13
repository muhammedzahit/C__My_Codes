#include <stdio.h>
int main(){
    float n=1.0;
    printf("Enter repeat:");
    int rep,s;
    scanf("%d",&rep);
    double pi=0.0;
    // 4/1 - 4/3
    for (s=0; s<rep ; s++)
    {
        int i;
        pi += ( (4.0/n)- (4.0/(n+2.0)) );
        n+=4;
    }
    printf("Pi for %d repeat : %f",rep,pi);
    return 0;
}
// REPETITION 500 :             3.140593
// REPETITION 1.000 :           3.141093
// REPETITION 5.000 :           3.141493
// REPETITION 50.000 :          3.141583
// REPETITION 1.000.000 :       3.141592
// REPETITION 1.000.000.000 :   3.141594 
