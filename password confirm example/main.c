#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world sifre olustur world faln falia!\n");
    char sifre[100]={};
    char sifredogrulama[100]={};
    int i,yanlis;

while(1)
{        yanlis=0;
         i=0;
         printf("sifreyi olusturun: ");
         scanf("%s",&sifre);
         printf("sifreyi tekrar girin: ");
         scanf("%s",&sifredogrulama);

     while(!(sifre[i]== '\0' && sifredogrulama[i]== '\0'))
     {
         if(sifre[i]!=sifredogrulama[i])
         {
            yanlis=1;
            printf("yanlis\n");
            break;
         }
        else
        i++;
}
   if(yanlis==0)
        printf("doru\n");
}

    return 0;
}
