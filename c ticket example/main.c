#include <stdio.h>
#include <stdlib.h>

int main()
{   int makinedekibilet;
    char istenenbilet,e,E,K,k;

    makinedekibilet=10;

    for(;makinedekibilet>0;)
    {


       printf("almak istiyorsanýze e veya E: girin\n ");

       printf("kalan bilet sayisi icin k veya K girin\n");

       printf("kodu girin: ");
       scanf("%c",&istenenbilet);

       if(istenenbilet=='E' || istenenbilet=='e')
       {
         printf("bilet aldiniz!\n");
        makinedekibilet--;
       }

       else if(istenenbilet=='k' || istenenbilet=='K')
          printf("kalan bilet sayisi: %d\n",makinedekibilet);




    }



printf("BILET KALMADI");




    return 0;
}
