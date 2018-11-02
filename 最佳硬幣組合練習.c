#include <stdio.h>
#include <stdlib.h>
int main()
{
 int x;
 scanf("%d",&x);
 printf("硬幣的最佳組合為\n");
 printf("50元硬幣共:%d個\n",x/50);
 x = x%50;
 printf("10元硬幣共:%d個\n",x/10);
 x = x%10;
 printf("5元硬幣共:%d個\n",x/5);
 x = x%5;
 printf("1元硬幣共:%d個\n",x);
 }
