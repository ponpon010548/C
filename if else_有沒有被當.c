#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x = 0;
 printf("�п�J����:");
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
//�Y�u�Q���D�n���n�ɦҩO�H
 int y = 0;
 printf("�п�J����:");
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
//40���H�U��90���H�W��Ѯv
 int z = 0;
 printf("�п�J����");
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
