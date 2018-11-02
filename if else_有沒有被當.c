#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x = 0;
 printf("請輸入分數:");
 scanf("%d",&x);
 if(x<39)
    {
     printf("Fail\n");
     }
 else if(x<60)
    {
     printf("test again\n");
     }
 else
    {printf("pass\n");
    }
 system("pause");
//若只想知道要不要補考呢？
 int y = 0;
 printf("請輸入分數:");
 scanf("%d",&y);
 if (40<=y && y<60) //&& and ,|| or
    {
     printf("test angain\n");
    }

 else
    {
     printf("no\n");
    }
 system("pause");
//40分以下或90分以上找老師
 int z = 0;
 printf("請輸入分數");
 scanf("%d",&z);
 if (z<=40 || z>=90)
    {
     printf("find teacher");
    }
 else
    {
     printf("no");
    }
 }
