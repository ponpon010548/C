#include <stdlib.h>
#include <stdio.h>

//GCD(x,y)

int main(){
    int x ,y , temp, gcd = 0;
    printf("請輸入兩個數字x,y\n");
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    if (x < y){
        temp = x;
        x = y;
        y = temp;
    }
    while(x != 0){
        x = x % y;
        if (x!= 0){
            temp = x;
            x = y;
            y = temp;
        }
    }
    gcd = y;
    printf("gcd(x,y) = %d\n",gcd);
    return 0;
}
