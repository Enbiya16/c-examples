#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya1;
    dosya1 = fopen("C:\\Users\\user\\Downloads\\dosya1.txt","w");
    fputc('A',dosya1);
    //karakter ve karakter dizisi arasýndaki fark
    fputs("koji",dosya1);
    printf("bir isim...girsene;3..");
    char x[99];
    gets(x);
    fprintf(dosya1,"%s",x);
    fclose(dosya1);
    return 0;
}
