#include <stdlib.h>
#include <stdio.h>

int A(int m, int n);

int A (int m , int n)
{
 if (m==0)
 {
  return n+1;
  }
 else if (n==0)
 {
   return A(m-1,1);
 }
 else
 {
  return A(m-1,A(m,n-1));
 }
}

int main()
{
 int n=0 ,m=0;
 scanf("%d%d",&n,&m);
 return A(m,n);
 system("pause");
}
