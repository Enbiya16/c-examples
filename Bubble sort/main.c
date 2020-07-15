#include <stdio.h>
#include <stdlib.h>

int main()
{

    int d[10] = {6,7,3,1,2,8,4,5,9};

    int i=0,j=1,x,y;

    for(int e=0;e<89;e++){

        if(d[j]<d[i]){
           x=d[i];
           y=d[j];
           d[j]=x;
           d[i]=y;
            }

        i++;
        j++;

        if(d[j]==10){
        i=0;
        j=1;
        }
     printf(" %d. adim: ",e);

     for(int u=0; u<10;u++)
        printf("%d",d[u]);

     printf(" \n ");
    }
    return 0;
}
