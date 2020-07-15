#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{


    struct ogrenci{
    char ad[30];
    char soyad[39];
    int sinif;
}ogr1;

    strcpy(ogr1.soyad,"demir");
    strcpy(ogr1.ad,"ahmet");
    ogr1.sinif=5;
    printf("sinif: %d\n",ogr1.sinif);
    printf("ad: %s --- soyad: %s",ogr1.ad,ogr1.soyad);

    return 0;
}
