#include <stdio.h>
#include <stdlib.h>

int main(){
    float k, tk = 40.5;
    printf("一台斤 = 0.6 公斤\n");
    printf("請問%.2f台斤等於幾公斤:",tk);
    scanf("%f",&k);
    k =(int) (1000*k);
    tk = (int)(1000*tk*0.6);
    if(k==tk){
        printf("答對了!\n");
    }
    else
        printf("答錯了\n");
    system("pause");
    return 0;
}
