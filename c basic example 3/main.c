#include <stdio.h>
#include <stdlib.h>

// Muhammed Enbiya Demir No 190202018

int main()
{
    char cumle[99];
    printf("Cumleyi giriniz: ");
    gets(cumle);
    int sayac=0;

    for (int i = 0 ; cumle[i] != '\0' ; i++) {

       if(cumle[i]==' '){
         sayac=1;
       }

       if(i==0){
       printf("%c\n",cumle[i]);

       }

       if(sayac==1){
       printf("%c\n",cumle[i+1]);
       sayac=0;
       }

    }


    return 0;
}
