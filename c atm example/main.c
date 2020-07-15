#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Bankamatik uygulamasi.\n");
    printf("Bankamatik kac TL para ile acilis yapsin:");
    int depo;
    scanf("%d",&depo);
    printf("Kac TL para cekmek isterseniz maks yuksek banknotlarla odeme alacaksiniz\n");
    printf("ne kadar para çekmek istiyorsunuz?:");
    int para;
    scanf("%d",&para);

    while(para/200!=0){
     printf("200TL BANKNOT\n");
     para=para-200;
     }
     while(para/100!=0){
        printf("100TL BANKNOT\n");
        para=para-100;
     }
      while(para/50!=0){
        printf("50TL BANKNOT\n");
        para=para-50;
     }
      while(para/20!=0){
        printf("20TL BANKNOT\n");
        para=para-20;
     }
      while(para/10!=0){
        printf("10TL BANKNOT\n");
        para=para-10;
     }
      while(para/5!=0){
        printf("5TL BANKNOT\n");
        para=para-5;
     }
      while(para/1!=0){
        printf("1TL BANKNOT\n");
        para=para-1;
     }
     printf("Paranýz ödenmistir.");





    return 0;
}
