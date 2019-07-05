#include <stdlib.h>
#include <stdio.h>

void main(){
    char Inputchar;
    printf("Game over...\n");
    do{
        printf("Play Again?(y/n)");
        Inputchar = getchar();
        fflush(stdin);
    }while((Inputchar!='y')&&(Inputchar!='n'));
    system("pause");
}
