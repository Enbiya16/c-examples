#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct calisanbilgileri{
char bolum[12];

};

struct calisanlar{
char ad[390];
struct calisanbilgileri bilgi;
}calisanlar;
int main()
{
    printf("struct ici struct\n");
    strcpy(calisanlar.bilgi.bolum,"hademe");
    printf("%s",calisanlar.bilgi.bolum);

    return 0;
}
