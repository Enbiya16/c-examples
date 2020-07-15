#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Muhammed Enbiya Demir 190202018
    char x[99];
    printf("Bir sayi giriniz: ");
    scanf("%s",&x);
    FILE *quiz8;

    for(int i =0;x[i]!='\0';i++){

    if(x[i]=='0')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("sifir ",quiz8);
    fclose(quiz8);
    }

    else if(x[i]=='1')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("bir ",quiz8);
    fclose(quiz8);
    }

    else if(x[i]=='2')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("iki ",quiz8);
    fclose(quiz8);
    }

    else if(x[i]=='3')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("uc ",quiz8);
    fclose(quiz8);
    }

     else if(x[i]=='4')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("dort ",quiz8);
    fclose(quiz8);
    }

     else if(x[i]=='5')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("bes ",quiz8);
    fclose(quiz8);
    }

     else if(x[i]=='6')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("alti ",quiz8);
    fclose(quiz8);
    }

    else if(x[i]=='7')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("yedi ",quiz8);
    fclose(quiz8);
    }

     else if(x[i]=='8')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("sekiz ",quiz8);
    fclose(quiz8);
    }

     else if(x[i]=='9')
    {
      FILE *quiz8=fopen("quiz8.txt","a");
    fputs("dokuz ",quiz8);
    fclose(quiz8);
    }






}
    char arr[999];
    quiz8=fopen("quiz8.txt","r");
    fgets(arr,101,quiz8);
    puts(arr);
    fclose(quiz8);


    printf("Dosyaya kaydedilmistir");



    return 0;
}
