#include <stdio.h>
#include <stdlib.h>

int main(){
    float k, tk = 40.5;
    printf("�@�x�� = 0.6 ����\n");
    printf("�а�%.2f�x�絥��X����:",tk);
    scanf("%f",&k);
    k =(int) (1000*k);
    tk = (int)(1000*tk*0.6);
    if(k==tk){
        printf("����F!\n");
    }
    else
        printf("�����F\n");
    system("pause");
    return 0;
}
