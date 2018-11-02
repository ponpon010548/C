#include <stdio.h>
#include <stdlib.h>
int main()
{//求最大
 int A[4]={},max  =0;
 scanf("%d%d%d%d%d",&A[0],&A[1],&A[2],&A[3],&A[4]);
 max = A[0];
 if (A[1]>max)
 {
  max=A[1];
 }
 if(A[2]>max)
 {
  max=A[2];
  }
  if(A[3]>max)
 {
  max=A[3];
  }
  if(A[4]>max)
 {
  max=A[4];
  }
 printf("max number is %d\n",max);
 system("pause");
//求最小，用For迴圈
 int B[4] ={},min , i ;
 scanf("%d%d%d%d%d",&B[0],&B[1],&B[2],&B[3],&B[4]);
 min = B[0];
 for (i =0 ; i<=4 ;i++)
 {
  if(B[i]<=min)
  {
      min = B[i];
  }
 }
 printf("min number is %d\n",min);
}
