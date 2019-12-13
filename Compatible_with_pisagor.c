#include <stdio.h>
// FIND COMPATIBLE NUMBERS WITH PISAGOR THEO
int main()
{
    int a,b,c;
    printf("Compatible with pisagor :   A -   B -   C\n",a,b,c);
    for (a= 2; a<=500; a++)
    {
        for (b=1; b<a; b++)
        {
            for (c=1; c<a; c++)
            {
                if ( (a*a) == (b*b)+(c*c) )
                {
                    printf("Compatible with pisagor : %3d - %3d - %3d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
