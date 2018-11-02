#include <stdio.h>
#include <stdlib.h>

int main()
{int n = 0 ,s =1;
 scanf("%d",&n);
 while (n>1)
 {
  s = s*n;
  n--;
 }
 printf("%d\n",s);
 return 0;
}
