#include <stdio.h>
#include <stdlib.h>


void hesapla(int girilen_gun,int *yil,int *ay,int *gun){

    //aya 30 gun diyip yılı 365 gun almıssınız sanırım ona gore yaptim

    *yil = girilen_gun/365;
    girilen_gun=girilen_gun%365;
    *ay = girilen_gun/30;
    girilen_gun=girilen_gun%30;
    *gun = girilen_gun;

}
 //Muhammed Enbiya Demir no 190202018

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
