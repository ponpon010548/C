#include <stdio.h>
#include <stdlib.h>

/*�Ĥ@�D
int main(){
    int x, y, z, maximum;
    printf("�п�J�T�ӼƦr�G");
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

/*�ĤG�D
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

/*�ĤT�D
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

/*�ĥ|�D
int power(int x,int y);

int main(){
    int n = 0, sum = 0;
    printf("�п�J�@�ӼƦr�G");
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

/*�Ĥ��D
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

/*�Ĥ��D
int day(int distance);
int night(int distance);
int ceiling(int x, int y);
int main(){
    int x = 0 ;
    float distance = 0;
    printf("�п�J�鶡(1)�Ω]��(2)�G");
    scanf("%d",&x);
    printf("�п�J���{(KM)�G");
    scanf("%f",&distance);
    distance = (int)(distance * 1000);
    if(x==1)
        printf("���ꬰ%d��\n",day(distance));
    else
        printf("���ꬰ%d��\n",night(distance));
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

/*�ĤC�D
void main(){
    int year;
    printf("����X�~�H");
    scanf("%d",&year);
    if ((year + 1911) % 4 == 0)
        printf("�O�|�~");
    else
        printf("���O�|�~");
    system("pause");
}
*/

/*�ĤK�D
void main(){
    char alph ;
    printf("�п�J�^��r���G");
    alph = getchar();
    fflush(stdin);
    alph = (int) alph;
    if(65<=alph && alph<=90)
        printf("%c\n",alph + 32);
    else if(97<= alph && alph <= 122)
        printf("%c\n", alph - 32);
    else
        printf("�z�ҿ�J���ä��O�^��r��");
    system("pause");
}
*/

/*�ĤE�D
void main(){
    int x, y, z = 0;
    printf("�п�J�T���\n");
    scanf("%d%d%d",&x,&y,&z);
    if(abs(x - y) < z && (x + y) > z)
        printf("�i�H�Φ��T����\n");
    else
        printf("����Φ��T����\n");
    system("pause");
}
*/

/*�ĤQ�D
int main(){
    int x, y, z, maximum, small_1, small_2;
    printf("�п�J�T����G\n");
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
        printf("�i�H�Φ������T����\n");
    else
        printf("����Φ������T����\n");
    system("pause");
    return 0;
}
*/

/*�ĤQ�@�D
int power(int x,int y);
void main(){
    int x, y = 0 ;
    printf("�п�J��ӥ����\n");
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    while(y < 0){
        printf("�п�J�����\n");
        printf("y = ");
        scanf("%d",&y);
    }
    if(x == 0 && y == 0){
        printf("0��0����L�w�q�C\n");
    }
    else{
        printf("%d��%d���� = %d\n", x, y, power(x,y));
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

/*�ĤQ�G�D
void main(){
    int m = 0,factorial = 1, sum = 0;
    while(m <= 0 || m >= 10){
    printf("�п�J�@�ӼƦr m (0 < m < 10), m = ");
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

/*�ĤQ�T�D
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

/*�ĤQ�|�D
void main(){
    int price = 0, money = -1, charge = 0;
    printf("�п�J�ʲ����B�G");
    scanf("%d", &price);
    while(money < price){
    printf("�п�J�I�X���B(�ȱ���100������)�G");
    scanf("%d", &money);
    }
    charge = money - price;
    if(charge >= 50){
        printf("��%d��50��\n",charge / 50);
        charge = charge - 50 * (charge / 50);
    }
    if (charge >= 10){
        printf("��%d��10��\n",charge / 10);
        charge = charge - 10 * (charge / 10);
    }
    if(charge>= 5){
        printf("��%d��5��\n",charge / 5);
        charge = charge - 5 * (charge / 5);
    }
    if(charge> 0)
        printf("��%d��1��\n",charge);
    system("pause");
}
*/

/*�ĤQ���D
void main(){
    int x, y, gcd;
    printf("��Jx:"); scanf("%d",&x);
    printf("��Jy:"); scanf("%d",&y);
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
