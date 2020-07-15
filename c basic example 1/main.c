#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ilk sayiyi gir tam sayi giriniz");
    int x,y,toplam;
    scanf("%d",&y);
    printf("ikinci sayi gir");
    scanf("%d",&x);

    while(y>x)
    {
    printf("iste aradaki sayilar %d \n",x);
    x++;
    toplam=x+toplam;

    }
    printf("%d",toplam);
        return 0;
}
