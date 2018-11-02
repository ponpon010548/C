#include <stdlib.h>
#include <stdio.h>

int GCD(int n, int m);

int GCD (int n , int m)
{
 if (n%m==0)
 {
  return m;
  }
 else
 {
  return GCD(m,n%m);
 }
}

int main()
{
 int n=0 ,m=0;
 scanf("%d%d",&n,&m);
 return GCD(n,m);
 system("pause");
}
