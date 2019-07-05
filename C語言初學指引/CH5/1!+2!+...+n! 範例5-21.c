#include <stdio.h>
#include <stdlib.h>

//calculate 1!+2!+...+n! ( 0 <= n < 10)

void main(){
    int n = 0, sum = 0;
    printf("½Ð¿é¤Jn = ");
    scanf("%d", &n);
    if (n==0)
        printf("0! = 1\n");
    for(int i = 1; i < 10 ;i++){
        int temp = 1;
        for(int j = 1 ; j <= i ; j++){
            if(j == n + 1)
                goto ProgEnd;
            temp = temp * j;
        }
        printf("%d\n",temp);
        sum = sum + temp;
    }
    ProgEnd: printf("1!+2!+...+%d! = %d\n",n ,sum);
    system("pause");
}
