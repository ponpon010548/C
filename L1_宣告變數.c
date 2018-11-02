#include <stdio.h>
#include <stdlib.h>
int C[3];
int main()
{
 int A[3];
 A[0] = 99;
 A[1] = 10;
 A[2] = 1;
 int x = A[0] + A[1] + A[2];
 printf("%d\n",x);
 system("pause");
 //沒有給初值
 int B[3];  //int B[3]={0} 則全部都設成0 或是int B[3]={} local variable 要先給初值才不容易出錯
 int y = B[0] + B[1] + B[2];
 printf("%d\n",y);
 system("pause");
 //Global variable 初值才會設定為0
 int z = C[0] + C[1] + C[2];
 printf("%d\n",z);
 system("pause");
 }

