#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct liste{

int yas;
char isim[99];

};

//Muhammed Enbiya Demir 190202018

int main()
{
    int bum;
    char arr[99];
    // 'bum' ve 'arr' sıralama icin gerekli

    struct liste* liste;
    printf("Kisi sayisini giriniz: ");
    int x;
    scanf("%d",&x);
    liste = malloc(x * sizeof(struct liste));

    for(int i=0;i<x;i++){
        printf("%d. kisiyi giriniz: ",i+1);
        scanf("%s",&liste[i].isim);
        printf("%d. kisinin yasini giriniz: ",i+1);
        scanf("%d",&liste[i].yas);
    }

      //isim siralamasi yaptigim yer
printf("Ada gore fihrist siralamasi: \n");



   for (int i=0; i < x-1 ; i++)
	{
		for (int j=1; j < x ; j++)
		{
			if (strcmp(liste[i].isim,liste[j].isim) > 0)
			{
                strcpy(arr,liste[i].isim);
				strcpy(liste[i].isim,liste[j].isim);
				strcpy(liste[j].isim,arr);

				  bum = liste[i].yas;
                  liste[i].yas = liste[j].yas;
                  liste[j].yas = bum;

			}
		}
	}

		for (int i=0;i<x; i++)
	{
		printf("%s  %d \n", liste[i].isim,liste[i].yas);
	}



    //yas siralamasi yaptigim yer
    printf("Yasa gore buyukten kucuge siralamasi: \n");



  for(int i=0;i<x;i++)
  {
   for(int j=i+1;j<x;j++)
   {
     if( liste[j].yas>liste[i].yas )
    {
      bum = liste[i].yas;
      liste[i].yas = liste[j].yas;
      liste[j].yas = bum;

      strcpy(arr,liste[i].isim);
				strcpy(liste[i].isim,liste[j].isim);
				strcpy(liste[j].isim,arr);
    }
   }
  }

   for(int i=0;i<x;i++){
    printf("%s  %d \n ",liste[i].isim,liste[i].yas);}




    return 0;
}
