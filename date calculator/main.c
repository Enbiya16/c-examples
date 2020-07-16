#include <stdio.h>
#include <stdlib.h>


void hesapla(int girilen_gun,int *yil,int *ay,int *gun){

  

    *yil = girilen_gun/365;
    girilen_gun=girilen_gun%365;
    *ay = girilen_gun/30;
    girilen_gun=girilen_gun%30;
    *gun = girilen_gun;

}
 

int main()
{
    printf("Isin bitme suresini gun olarak giriniz: ");
    int girilen_gun;
    scanf("%d",&girilen_gun);
    int yil,ay,gun;
    hesapla(girilen_gun,&yil,&ay,&gun);
    printf("yil: %d ay: %d gun: %d",yil,ay,gun);
    return 0;
}
