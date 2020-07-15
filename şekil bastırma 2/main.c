#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i,j;
    printf("sekil bastirma");
    for(i=0;i<=6;i++)
        {printf("-------");
        for(j=0;j<i;j++){

            printf("x");
        }
        printf("\n");

    }
    //farkli farkli
    printf("agac bastirma falan=== ");


    for(i=0;i<8;i++)
    {
        for(j=0;j<8-i;j++)
         {
            printf(" ");
         }
         for(j=0;j<2*i-1;j++){
            printf("x");
         }
         printf("\n");
    }
    for(i=0;i<10;i++)
    {printf("    ");
        for(j=0;j<6;j++)
        {
            printf("x");

        }
        printf("\n");
    }

    return 0;
}
