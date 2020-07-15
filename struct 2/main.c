#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kitapsatis{
char isim[30];
char yazar[40];
int basimyili;
float fiyat;


}Kitap1={"araf","dantealighieri",1990,5.16};
int main()
{
    printf("basim yili: %d\n",Kitap1.basimyili);
    printf("yazar: %s\n",Kitap1.yazar);
    printf("isim: %s\n",Kitap1.isim);
    printf("fiyat: %f\n",Kitap1.fiyat);
    return 0;
}
