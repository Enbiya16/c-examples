#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi1[]="kopya"f;
    char dizi2[]={};
    strcpy(dizi2,dizi1);
    printf("%s\n",dizi2);
    strupr(dizi1);
    printf("%s\n",dizi1);
    printf("%d",strlen(dizi1));
}
