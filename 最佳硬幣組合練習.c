#include <stdio.h>
#include <stdlib.h>
int main()
{
 int x;
 scanf("%d",&x);
 printf("�w�����̨βզX��\n");
 printf("50���w���@:%d��\n",x/50);
 x = x%50;
 printf("10���w���@:%d��\n",x/10);
 x = x%10;
 printf("5���w���@:%d��\n",x/5);
 x = x%5;
 printf("1���w���@:%d��\n",x);
 }
