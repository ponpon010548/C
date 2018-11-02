#include <stdlib.h>
#include <stdio.h>

int main()
{
 int n=0 , s=1 , i=0;
 scanf("%d",&n);
 if (n==0)
 {return 1 ;
  }
 else
 {for(i=1;i<=n;i++)
  {s = s*i;}
  return s;
 }
 system("pause");
}
