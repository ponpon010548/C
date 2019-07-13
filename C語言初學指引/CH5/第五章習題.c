#include <stdio.h>
#include <stdlib.h>

/*第一題
int main(){
    int x, y, z, maximum;
    printf("請輸入三個數字：");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    maximum = x;
    if (y> maximum)
        maximum = y;
    if (z > maximum)
        maximum = z;
    printf("max is %d\n",maximum);
    system("pause");
    return 0;
}
*/

/*第二題
int main(){
    int count = 0, flag = 0;

    for (int i = 2; i <= 100 ; i++){
        flag = 0;
        for (int j = 2 ; j*j <= i ; j++){
            if(i % j == 0){
                flag = 1;
                break;
                }
            }
        if(flag == 0){
            count++;
            if(count==6){
                printf("\n");
                count = 1;
                }
            printf("%d\t",i);
            }
        }
    printf("\n");
    system("pause");
    return 0;
}
*/

/*第三題
int main(){
    int count = 0;
    for(int i = 0; i <=9; i++){
        if(i%2==0){
            for(int j = 0 ; j<= 9 ; j++){
                if(j%2 == 0){
                    count++;
                    if (count == 6){
                        printf("\n");
                        count = 1;
                    }
                    int product = i * j;
                    printf("%d * %d = %d\t",j ,i, product);
                }
            }
        }
    }
    system("pause");
    return 0;
}
*/

/*第四題
int power(int x,int y);

int main(){
    int n = 0, sum = 0;
    printf("請輸入一個數字：");
    scanf("%d",&n);
    for (int i = 0 ; i <= n ; i++){
        sum = power(i,i) + sum;
    }
    printf("n = %d\n", n);
    printf("Sum = %d\n",sum);
    system("pause");
    return 0;
}

int power(int x,int y){
        int temp = x;
        for(int i = 1; i <= y -1 ; i++){
            x = x*temp;
        }
        return x;
    }
*/

/*第五題
int main(){
    int j = 1;
    for(int i = 1 ; i <= 9 ; j++){
        printf("%d * %d = %d\t", i, j, i * j);
        if(j>=9){
            printf("\n");
            j = 0;
            i++;
        }
    }
    system("pause");
    return 0;
}
*/

/*第六題
int day(int distance);
int night(int distance);
int ceiling(int x, int y);
int main(){
    int x = 0 ;
    float distance = 0;
    printf("請輸入日間(1)或夜間(2)：");
    scanf("%d",&x);
    printf("請輸入里程(KM)：");
    scanf("%f",&distance);
    distance = distance * 1000;
    if(x==1)
        printf("車資為%d元\n",day(distance));
    else
        printf("車資為%d元\n",night(distance));
}
int day(int distance){
    if(distance <= 1500){
        return 70;
    }
    else{
        return 70 + ceiling((distance - 1500) , 300) * 5;
    }
}

int night(int distance){
    if(distance <= 1250){
        return 70;
    }
    else{
        return 70 + ceiling((distance - 1250) , 250) * 5;
    }
}

int ceiling(int x, int y){
    if(x % y != 0){
        return x / y + 1;
    }
    else
        return x / y;
}
*/

/*第七題
void main(){
    int year;
    printf("民國幾年？");
    scanf("%d",&year);
    if ((year + 1911) % 4 == 0)
        printf("是閏年");
    else
        printf("不是閏年");
    system("pause");
}
*/

/*第八題
void main(){
    char alph ;
    printf("請輸入英文字母：");
    alph = getchar();
    fflush(stdin);
    alph = (int) alph;
    if(65<=alph && alph<=90)
        printf("%c\n",alph + 32);
    else if(97<= alph && alph <= 122)
        printf("%c\n", alph - 32);
    else
        printf("您所輸入的並不是英文字母");
    system("pause");
}
*/

/*第九題
void main(){
    int x, y, z = 0;
    printf("請輸入三邊長\n");
    scanf("%d%d%d",&x,&y,&z);
    if(abs(x - y) < z && (x + y) > z)
        printf("可以形成三角形\n");
    else
        printf("不能形成三角形\n");
    system("pause");
}
*/

/*第十題
int main(){
    int x, y, z, maximum, small_1, small_2;
    printf("請輸入三邊長：\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    maximum = x;
    if (y> maximum){
        maximum = y;
        small_1 = x;
    }
    else
        small_1 = y;
    if (z > maximum && maximum == y){
        maximum = z;
        small_2 = y;
    }
    else if (z > maximum && maximum == x){
        maximum = z;
        small_2 = x;
    }
    else
        small_2 = z;
    if(maximum * maximum == (small_1 * small_1 + small_2 * small_2))
        printf("可以形成直角三角形\n");
    else
        printf("不能形成直角三角形\n");
    system("pause");
    return 0;
}
*/

/*第十一題
int power(int x,int y);
void main(){
    int x, y = 0 ;
    printf("請輸入兩個正整數\n");
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    while(y < 0){
        printf("請輸入正整數\n");
        printf("y = ");
        scanf("%d",&y);
    }
    if(x == 0 && y == 0){
        printf("0的0次方無定義。\n");
    }
    else{
        printf("%d的%d次方 = %d\n", x, y, power(x,y));
    }
}

int power(int x,int y){
        int temp = x;
        for(int i = 1; i <= y -1 ; i++){
            x = x*temp;
        }
        return x;
    }
*/

/*第十二題
void main(){
    int m = 0,factorial = 1, sum = 0;
    while(m <= 0 || m >= 10){
    printf("請輸入一個數字 m (0 < m < 10), m = ");
    scanf("%d", &m);
    }
    for(int i = 1 ; i <= m ; i++){
        factorial = 1;
        for(int j =1 ; j <= i ; j++){
            factorial = factorial * j;
        }
        sum = sum + factorial;
    }
    printf("1! + ... + m! = %d\n",sum);

}
*/

/*第十三題
void main(){
    char Input_char;
    printf("Game over...\n");
    Q:  printf("Play Again?(y/n)");
        Input_char = getchar();
        fflush(stdin);
    if(Input_char != 'y' && Input_char != 'n'){
        goto Q;
    }
    system("pause");
}
*/

/*第十四題
void main(){
    int price = 0, money = -1, charge = 0;
    printf("請輸入購票金額：");
    scanf("%d", &price);
    while(money < price){
    printf("請輸入付出金額(僅接受100的倍數)：");
    scanf("%d", &money);
    }
    charge = money - price;
    if(charge >= 50){
        printf("找%d個50元\n",charge / 50);
        charge = charge - 50 * (charge / 50);
    }
    if (charge >= 10){
        printf("找%d個10元\n",charge / 10);
        charge = charge - 10 * (charge / 10);
    }
    if(charge>= 5){
        printf("找%d個5元\n",charge / 5);
        charge = charge - 5 * (charge / 5);
    }
    if(charge> 0)
        printf("找%d個1元\n",charge);
    system("pause");
}
*/

/*第十五題
void main(){
    int x, y, gcd;
    printf("輸入x:"); scanf("%d",&x);
    printf("輸入y:"); scanf("%d",&y);
    printf("gcd(%d,%d) = ",x ,y);
    if (x < y){
        y = x^y;
        x = x^y;
        y = y^x;
    }
    while(x != 0){
        x = x % y;
        if(x != 0){
            y = x^y;
            x = x^y;
            y = y^x;
        }
    }
    gcd = y;
    printf("%d\n",gcd);
    system("pause");
}
*/
