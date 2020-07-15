#include <stdio.h>
#include <stdlib.h>

int main()
{

      char girdi,sinifnum;
    int x;
    char siniflistesi [2][9]={};
    printf("Sinif listesine isim eklemek icin 'E' , sinif listesini gormek icin 'L' girin. \n");
    scanf("%c",&girdi);
    if(girdi=='E' || girdi=='e')
    {
      printf("Ogrenciyi hangi sýnýfa kaydedeceksiniz?(A,B,C)\n");
       scanf("%c",&sinifnum);


       if(sinifnum=='A')
       {
        printf("hangi siraya yerlestirmek istersiniz?[0-9]\n");
        scanf("%d",&x);
        printf("ogrenci adini girin: ");
        scanf("%s",&siniflistesi[0][1]);
        }

        else if(sinifnum=='B')
        {
        printf("hangi siraya yerlestirmek istersiniz?[0-9]\n");
        scanf("%d",&x);
        printf("ogrenci adini girin: ");
        scanf("%s",&siniflistesi[1][1]);
        }

        else if(sinifnum=='C')
        {
        printf("hangi siraya yerlestirmek istersiniz?[0-9]\n");
        scanf("%d",&x);
        printf("ogrenci adini girin: ");
        scanf("%s",&siniflistesi[2][1]);
        }


    }


    else if(girdi=='L' || girdi=='l')
    {
       for(int i=0;i<3;i++)
       {
           printf("isimler: %s\n",siniflistesi[i][1]);
       }
    }
    else
        printf("Yanlýþ karakter girdiniz lütfen tekrar deneyin.");



    return 0;
}
