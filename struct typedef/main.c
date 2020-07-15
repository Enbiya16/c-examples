#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct ogrencibilgileri{
 char ad[12];
 int sinif;
 char sube;
 int yas;

}ogrenci;


int main()
{
    ogrenci ogrenci1={"ahmet",5,'A',10};
    ogrenci ogrenci2;

    printf("yas: %d   sube: %c\n",ogrenci1.yas,ogrenci1.sube);
    printf("isim<: %s",ogrenci1.ad);

    return 0;
}
