#include <stdlib.h>
#include <stdio.h>
int Fib (int n);
int Fib(int n)
{
 int A[n+1],i=0;
 A[n+1]=0;
 A[0]=0;
 A[1]=1;
 for (i=2;i<=n;i++)
 {
  A[i]=A[i-1]+A[i-2];
 }
 return A[n];
 }
int main()
{
 int a =0;
 scanf("%d",&a);
 return Fib(a);
 system("pause");
}
