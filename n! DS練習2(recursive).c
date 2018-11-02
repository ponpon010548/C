#include <stdlib.h>
#include <stdio.h>
int Fac (int n);
int Fac(int n)
{
    if(n==0)
    {
        return 1 ;
    }
    else
    {
        return Fac(n-1)*n ;
    }
 }
int main()
{
 int a =0;
 scanf("%d",&a);
 return Fac(a);
 system("pause");
}
