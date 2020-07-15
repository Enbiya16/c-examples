#include <stdio.h>
#include <stdlib.h>

void fahrenheithesap(int x){
    x=x+273;
    printf("girdigin celciusun fahrenheit halİ: %d\n",x);
}



int main()
{
    int x;
    printf("fahreineta donusturmek istedigin cel. birimini gir:");
    scanf("%d",&x);
    fahrenheithesap(x);

    return 0;
}
