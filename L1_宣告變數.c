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
 //�S�������
 int B[3];  //int B[3]={0} �h�������]��0 �άOint B[3]={} local variable �n������Ȥ~���e���X��
 int y = B[0] + B[1] + B[2];
 printf("%d\n",y);
 system("pause");
 //Global variable ��Ȥ~�|�]�w��0
 int z = C[0] + C[1] + C[2];
 printf("%d\n",z);
 system("pause");
 }

