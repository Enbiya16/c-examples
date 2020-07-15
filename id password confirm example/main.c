#include <stdio.h>
#include <stdlib.h>




    do{


    char id1[100];
   char id2[100];
   char pw2[100];
   char pw1[100];
    printf("kullanici adi gir: ");
    scanf("%s",&id1);
    printf("kullanici adini tekrar gir: ");
    scanf("%s",&id2);

    printf("sifre olustur: ");
    scanf("%s",&pw1);
    printf("sifreni tekrar gir: ");
    scanf("%s",&pw2);



    if(strcmp(pw1,pw2)==0 && strcmp(id1,id2)==0 )
        {
        printf("sifre ve kullanici adi dogrulandi gule gule kullan. ");
        break;
        }
    else if(strcmp(pw1,pw2)!=0 && strcmp(id1,id2)==0)
        {
        printf("sifre yanlis, kullanici adi dogru tekrar dene. \n ");

        }
    else if(strcmp(id1,id2)!=0 && strcmp(pw1,pw2)==0)
          {
        printf("kullanici Adi yanlis, sifre dogru tekrar dene. \n ");
        }
    else
    {
        printf("iki giriste yanlis: \n");
        }
   }while(1);










    return 0;
}
