#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya1;
    char karakter[90];
    dosya1 = fopen("C:\\Users\\user\\Downloads\\dosya1.txt","r");
          fgets(karakter,101,dosya1);
          puts(karakter);

          fclose(dosya1);
    return 0;
}
