#include <stdlib.h>
#include <stdio.h>

int Bin(int n, int m);

int Bin (int n , int m)
{
 if (m==n || m==0)
 {
  return 1;
  }
 else
 {
  return Bin(n-1,m)+Bin(n-1,m-1);
 }
}

int main()
{
 int n=0 ,m=0;
 scanf("%d%d",&n,&m);
 return Bin(n,m);
 system("pause");
}
