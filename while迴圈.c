#include <stdio.h>
#include <stdlib.h>

int main()
{//從0印到x
 int x = 0 , i = 0;
 scanf("%d",&x);
 while(i<=x)
    {
     printf("%d\n",i);
     i++ ;
    }
 system("pause");
 //從x印到0
 int y = 0 , j = 0;
 scanf("%d",&y);
 j=y;
 while(j>=0)// while(j) 不會印出0
    {
     printf("%d\n",j--);
    }
 system("pause");
 //只允許用一個變數
 int z = 0 ;
 scanf("%d",&z);
 while(0<=z)
    {
     printf("%d\n",z--);
    }
 }
