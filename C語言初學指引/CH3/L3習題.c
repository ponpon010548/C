#include <stdlib.h>
#include <stdio.h>
/* 第一題
int main(){
 int x = 1 , y = 1 , z = 1;
 z = ++x - y++; // z = 1 ,x = 2 , y = 2
 z = z + x++ + ++y; // z = 1 + 2 + 3 = 6 , x = 3 , y =3
 printf("%d\n",z);
 return 0;
}
*/
/*第二題
int main(){
int x = 3, y = 3, z = 3;
z+=++x*y++; // x = 4 , right hand = 4*3 = 12 , y = 4 ,z = 12+3 = 15
//執行完++x*y++後，假設結果存在W，接著會執行z = z + w
printf("%d\n",z);
}
*/
/* 第三題
int main();


int main (){
int x;
float y , result;

x = 15;
y = 7.125;
result = (float)x/y;
printf("%f\n",result);
}
*/
/*第四題
int main(){
int a = 2 , b = 6 , c = 4 , d = 5;
float e = 6 , x = 0;
printf("%f\n" , x = (b*b - 4*a*c) / (d + 1 / (2*e)));
return 0;
}
*/
/*第五題
void main (void){
int a = 3, b = 4 ,c = 5;
a+=b*c++;
printf("a = %d\n",a);
printf("b = %d\n",b);
printf("c = %d\n",c);
}
*/
/*第六題
int main(){
    char a = 98, b = 101, c = 107;

    printf("%c\n", a );
    printf("%c\n", b + 10);
    printf("%c\n", b + 10);
    printf("%c\n", c );
    system("pause");
    return 0;
}
*/
/*第七題
int main(){
    short int a = 30000 , b = 30000;
    int c = 0;
    c = a + b;
    printf("%d\n", c);
    system("pause");
    return 0;
}
*/
/*第八題
int main(){
    float a = 3.3E-38;
    double c = 0;
    c = a * a;
    printf("%E\n",c);
    system("pause");
    return 0;
}//double: double precision float: single precision
*/
/*第九題
int main(){
    float a = 4, b = 5;
    printf("%f\n", a / b);
    system("pause");
    return 0;
}
*/
/*第十題
int main(){
    char *date = "2012/1/1";

    printf("謠傳%s\n", date);
    system("pause");
    return 0;
}
*/
