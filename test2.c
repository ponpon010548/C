#include <stdio.h>
#include <stdlib.h>
int main()
{
 int x;
 scanf("%d",&x);
 printf("%d\n",x/50);
 x = x%50;
 printf("%d\n",x/10);
 x = x%10;
 printf("%d\n",x/5);
 x = x%5;
 printf("%d\n",x);
 }
