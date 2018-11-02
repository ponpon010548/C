#include <stdio.h>
#include <stdlib.h>
//true:非0 false:0
//if,else
//if(true) then ..... else(false).....
int main()
{
 int x = 0 ;
 scanf("%d",&x);
 if(x>=0)
 {
    x = x*100;
    printf("%d\n",x);
 }
 else{
    x =-x;
    printf("%d\n",x);
 }
 int y = 0 , z = 0;
 scanf("%d%d",&y,&z);
 if(y==z)
    {
    printf("y=z\n");
    }
 else
    {
     printf("y!=z\n");
    }
 system("pause");
 //若是誤用"="
 int a = 0 , b = 0;
 scanf("%d%d",&a,&b);
 if(a=b)//若()內是0則會輸出false，會執行else部分，若()是非0，則會輸出true
    {
     printf("a=b\n");
    }
 else
    {
     printf("a!=b\n");
    }
 system("pause");
}
