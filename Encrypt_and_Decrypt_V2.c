#include <stdio.h>
#include <math.h>
// THİS PROGRAM ENCRYPT AND DECRYPT NUMBERS THAT HAVE FOUR DIGITS
// FİRSTLY ADD 7 TO ALL DIGITS AND İF DIGIT NUMBER BIGGER THAN 10, PROGRAM CONVERT DIGIT NUMBER %= 10
// AND MOVES FIRST DIGIT TO THIRD DIGIT , SECOND DIGIT TO FOURTH DIGIT
// EXAMPLE:
// 1453 
// (1+7) (4+7) (5+7) (3+7)
// (8) (11 % 10) (12 %10) (10 % 10)
// 8120
// 8 ---> 2
// 1 ---> 0
// 2081 İS ENCRYPTED NUMBER 
int main(){
    int selection;
    FILE *file;
    printf("1-Encryption File\n");
    printf("2-Decryption File\n");
    scanf("%d",&selection);
    switch(selection){
    case 1:

        file = fopen("input.txt","r+");

        if (file == NULL) printf("File not able to found");

        else
        {

        int s=0,a,newNumber=0;
        while (fscanf(file,"%d",&a) != EOF){
            s++;
        }

        fclose(file);

        int *numbers = malloc(4*s);

        file = fopen("input.txt","r+");

        for (a=0; a<s; a++){
            fscanf(file,"%d",&numbers[a]);
        }

        fclose(file);

        int i;

        for (a=0; a<s; a++){
            double double1=0;
            for (i=0; i<4; i++){
                int n = numbers[a]%10;
                numbers[a] /= 10;
                n += 7; n %= 10;

                double1 += pow(10,i) * n;
            }
            newNumber = (int)double1;
            numbers[a] = newNumber;
            newNumber = 0;
        }


        int *holder = malloc(16);
        for (a=0; a<s; a++)
        {

            for (i=0; i<4; i++)
            {

                holder[i] = numbers[a]%10;
                numbers[a] /= 10;

            }
            numbers[a] = holder[1] * 1000+ holder[0] * 100+ holder[3] * 10+ holder[2];

        }



        file = fopen("output.txt","w+");

        for (a=0; a<s; a++){
            fprintf(file,"%d ",numbers[a]);
        }

        fclose(file);
        free(holder);
        free(numbers);
        }
        break;

    case 2:

        file = fopen("output.txt","r+");
        if (file == NULL) printf("File not able to found !");
        else
        {
        int cntr=0,a,i;
        while (fscanf(file,"%d",&a) != EOF)
        {
            cntr++;
        }
        fclose(file);
        file = fopen("output.txt","r+");
        int *numbers = malloc(4*cntr);
        for (a = 0; a< cntr; a++)
        {
            fscanf(file,"%d",&numbers[a]);
        }
        fclose(file);
        int *holder  = malloc (16);
        for (i=0 ; i<cntr ; i++)
        {
            for (a=0;a <4; a++)
            {
                holder[a] = numbers[i] %10;
                numbers[i] /= 10;
                if (holder[a] - 7 < 0) holder[a] = 10 + (holder[a]-7);
                else holder[a] -= 7;
            }
            numbers[i] = holder[1]*1000+ holder[0]*100 + holder[3]*10 + holder[2];
        }
        file = fopen("input.txt","w+");
        for (i=0; i<cntr; i++)
        {
            fprintf(file,"%d ",numbers[i]);
        }
        fclose(file);
        free(holder);
        free(numbers);
        }
        break;

    default:
        break;
    }
}
