#include <stdio.h>
#include <stdlib.h>


int binarysearch(int x){
int d[10]={45,1,53,4,86,12,31,5,69};

for(int i=0; i<9;i++){
    if(x=d[i]) printf("bulundu");


    else printf(" sayi %d. elemanda bulunamadi",i);


}


}
int main()
{
    int d[10]={45,1,53,4,86,12,31,5,69};
    int a;
    printf("aranmasini istediginiz sayiyi giriniz");
    scanf("%d",&a);

   binarysearch(a);


    return 0;
}
