#include <stdio.h>
#define N 10
/*
这是一个宏定义，是预编译命令中的一种，意思是用“N”这个字符常量来表示“10”这个字符，
以后凡是出现N的地方系统自动用10替换，记住这里的“10”仅代表一个字符，假如需要用于数学计算，
系统会自动进行类型转换。。。
准确来说“#define n 10”不是n=10的意思，
而是用10替换掉n，这是有区别的。
例如：
#include<stdio.h>
#define N a+b
void main()
{
int a=1,b=2;
printf ("%d",N*5);
}
输出的是11，而不是15。
又例如：
#include<stdio.h>
#define N (a+b)
void main()
{
int a=1,b=2;
printf ("%d",N*5);
}
输出的才是15。                  */

int count [N+1];

int fab (int n)
{
 count[n]++;
 if (n==0|| n==1)
  {
   return 1;
  }
 else
 {return fab(n-1)+fab(n-2);
 }
}
int main()
{
 int i=0 ;
 for (i=0; i <= N; i++)
 count[i]=0;
 fab(N);
 for (i=0;i<=N;i++)
 {
  printf("count[%d]=%d\n",i,count[i]);
  }
}
