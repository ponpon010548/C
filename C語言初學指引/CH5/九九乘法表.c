#include <stdio.h>
#include <stdlib.h>

//�E�E���k��

void main(){
    for(int i = 1; i<=9 ; i++){
        for(int j = 1 ; j<=9 ;j++){
            int k = i*j;
            printf("%d * %d = %d\t",i,j,k);
        }
        printf("\n");
    }
    system("pause");
}
