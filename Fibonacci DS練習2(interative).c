#include <stdlib.h>
#include <stdio.h>
int Fib (int n);
int Fib(int n)
{
    if(n==0)
    {
        return 0 ;
    }
    else if(n==1)
    {
        return 1 ;
    }
    else
    {
     int i =2 ,a=0 ,c=0,b=1 ;
     for (i;i<=n;i++)
     {
         c = a + b;
         a = b;
         b = c;
     }
    return c;
    }
 }
int main()
{
 int a =0;
 scanf("%d",&a);
 return Fib(a);
 system("pause");
}
