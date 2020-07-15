#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("faktoriyelini bulmak istediginiz sayiyi giriniz: ");
    int x,factsonuc;
    scanf("%d",&x);
    factsonuc=1;
    while(x>0)
    {   factsonuc=x*factsonuc;
        x--;
    }
    printf("sonuc= %d",factsonuc);


    return 0;
}
