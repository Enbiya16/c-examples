#include <stdio.h>
#include <stdlib.h>

deger_okutma(int d[],int i){
    for(int j=0;j<i;j++){
    printf("%d \n",d[j]);
}
return 0;
}

deger_ort(int d[],int i){
    int x=0;
    for(int j=0;j<i;j++){

x=x+d[j];
}

return x/i;

}


int main()
{
    printf("kac tane deger gireceksiniz:");
    int i;
    scanf("%d",&i);

    int degerler[i];
    for(int j=0;j<i;j++){
        printf("%d. degeri girin:",j);
        scanf("%d",&degerler[j]);
    }
    printf("girdiginiz tum degerler\n");
    deger_okutma(degerler,i);
    printf("deger ortalamasi: %d",deger_ort(degerler,i));
    return 0;
}
