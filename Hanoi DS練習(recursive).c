#include <stdio.h>
#include <stdlib.h>

int Hanoi(int n ,char start , char tem , char end );

int Hanoi(int n ,char start , char tem , char end )
{
 int c;
 if(n<=0)
 {
  printf("n must >=1");
  }
 if(n==1)
 {
  printf("move from %c to %c\n",start , end);
 }
 else
 {
  Hanoi(n-1, start ,  end ,  tem);
  Hanoi(1, start ,  tem ,  end );
  Hanoi(n-1 ,  tem ,  start , end);
  }
}

int main()
{
 int n = 0 , A ,B ,C;
 scanf("%d",&n);
 Hanoi(n,'A','B','C');
 }
