#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Muhammed Enbiya Demir 190202018




int main()
{
    char dizi[999];
    printf("Ulke isimlerini ve oranlarini giriniz: ");
    gets(dizi);
    printf("\n");


    printf("Ulke ve oran siralamasi:\n ");


int i=0;


 while (dizi[i] != '\0') {

        int j=isdigit(dizi[i]);

        while(j==0){
            printf("%c",dizi[i]);
            i++;
            j=isdigit(dizi[i]);
        }

   printf(":");


        while(j==1){
            printf("%c",dizi[i]);
            i++;
            j=isdigit(dizi[i]);
        }

   printf("\n");
   }


    return 0;
}
