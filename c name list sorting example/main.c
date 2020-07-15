#include <stdio.h>
#include <stdlib.h>


// Muhammed Enbiya Demir 190202018


struct kimlik{
char isim[99];
int gun;
int ay;
int yil;


};


int kucuguBul(struct kimlik *liste){

int s=0;
int kisisayi=0;
    while(1)
{

    if(liste[s].ay>0 && liste[s].ay<13)
    kisisayi++;
    else
        break;

    s++;
}




int j=0;
int k=0;

for(;j<kisisayi;){



if(k==kisisayi)
    return j;


if(liste[j].yil==liste[k].yil && liste[j].ay==liste[k].ay && liste[j].gun==liste[k].gun){
    k++;
  }


else if(liste[j].yil>liste[k].yil){
  k++;
}

else if(liste[j].yil==liste[k].yil && liste[j].ay>liste[k].ay ){
   k++;
}

else if(liste[j].yil==liste[k].yil && liste[j].ay==liste[k].ay && liste[j].gun>liste[k].gun){
   k++;
}

//aralık


else if(liste[j].yil<liste[k].yil){
    j++;
    int k=0;
    }


else if(liste[j].yil==liste[k].yil && liste[j].ay<liste[k].ay){
   j++;
   int k=0;
    }


else if(liste[j].yil==liste[k].yil && liste[j].ay==liste[k].ay && liste[j].gun<liste[k].gun){
   j++;
   int k=0;
}




}//for onu


return j;
}// fonk sonu


int main()
{
    int n;
    printf("Kac kisi gireceksin: ");
    scanf("%d",&n);
    struct kimlik liste[n];

   for(int i=0;i<n;i++){
    printf("%d. kisinin ismini girin: ",i+1);
    scanf("%s",liste[i].isim);

    printf("%d. kisinin dogum gunu: ",i+1);
    scanf("%d",&liste[i].gun);

    printf("%d. kisinin dogum ayi: ",i+1);
    scanf("%d",&liste[i].ay);

    printf("%d. kisinin dogum yili: ",i+1);
    scanf("%d",&liste[i].yil);
   }

   printf("---------------------\n");
   printf("Kisi bilgileri\n");
   printf("---------------------\n");
   for(int i=0;i<n;i++){
   printf("%s - %d / %d / %d \n ",liste[i].isim,liste[i].gun,liste[i].ay,liste[i].yil);
   }
   printf("---------------------\n");

   printf("En Kucuk Kisinin ismi: %s \n",liste[kucuguBul(liste)].isim);
   printf("En kucuk kisi dogum tarihi: %d / %d / %d \n ",liste[kucuguBul(liste)].gun,liste[kucuguBul(liste)].ay,liste[kucuguBul(liste)].yil);
    return 0;
}
