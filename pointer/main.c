#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=65;
char *p;
p = &a;
printf("%d\n",*p);
*p=59;
printf("%d\n", a);


    return 0;
}
