#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 第一題
int main(){
    printf("今日降價\"25%%\"，請把握機會");
    return 0;
}
*/

/* 第二題
int main(){
    printf("\\t是tab鍵的效果");
    return 0;
}
*/

/*第三題
int main(){
    float a = 12.38;
    printf("%+010.4f\n",a);
    return 0;
}
*/
/*第四題
int main(){
    char *name = (char*)malloc(sizeof(char));
    int grade_cs = 0, grade_math = 0, grade_english = 0;
    printf("請輸入姓名：");
    scanf("%s",name);

    printf("請輸入計概成績：");
    scanf("%d", &grade_cs);

    printf("請輸入數學成績：");
    scanf("%d", &grade_math);

    printf("請輸入英文成績：");
    scanf("%d", &grade_english);

    printf("統計中..................\n");
    printf("%s的成績如下：\n",name);
    printf("= = = = = = = = = = = = = = =\n");

    printf("\t計概：%d\n", grade_cs);
    printf("\t數學：%d\n", grade_math);
    printf("\t英文：%d\n", grade_english);
    printf("------------------------\n");
    int total_grade = grade_cs + grade_math + grade_english;
    printf("\t總分：%d\n", total_grade);
    printf("\t平均：%.2f\n",(float)total_grade / 3);
    return 0;
}
*/
/*第五題
int main(){
    char *name = (char*)malloc(sizeof(char));
    char *grade_cs = (char*)malloc(sizeof(char));
    char *grade_math = (char*)malloc(sizeof(char));
    char *grade_english = (char*)malloc(sizeof(char));

    printf("請輸入姓名：");
    fgets(name, 20, stdin);

    name[strcspn(name, "\n")] = '\0';
    // http://tw.gitbook.net/c_standard_library/c_function_strcspn.html
    //C庫函數 size_t strcspn(const char *str1, const char *str2)
    //計算str1的起始段長度完全包含在str2中的字符
    printf("請輸入計概成績：");
    fgets(grade_cs, 20, stdin);

    printf("請輸入數學成績：");
    fgets(grade_math, 20, stdin);

    printf("請輸入英文成績：");
    fgets(grade_english, 20, stdin);

    printf("統計中..................\n");
    printf("%s的成績如下：\n",name);
    printf("= = = = = = = = = = = = = = =\n");

    printf("\t計概：%s\n", grade_cs);
    printf("\t數學：%s\n", grade_math);
    printf("\t英文：%s\n", grade_english);
    printf("------------------------\n");
    int total_grade = atoi(grade_cs) + atoi(grade_math) + atoi(grade_english);
    printf("\t總分：%d\n", total_grade);
    printf("\t平均：%.2f\n",(float)total_grade / 3);
    return 0;
}
*/
/*第五題test
//strcspan(char *1 , char *2)：找出第一個同時在Char 1 和 Char 2 中的char之index(char 1 的)
//strspan(char *1, char *2):找出第一個同時不在char1 和 char 2中的char 之index
int main(){
    char *name = (char*)malloc(sizeof(char));
    int a = 0;
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("%c\n",name[5]);
    return 0;

}
*/

/*第六題
int main(){
    float x = 0;                   // double x = 0;
    printf("請輸入數值：");
    scanf("%f",&x);                //scanf("%lf", &x); lf搭配double
                                   //https://bbs.csdn.net/topics/20419382
    printf("%f的三次方為%f\n",x,x*x*x);
    return 0;
    }

    */
/*第七題
int main(){
    int num = 0;
    printf("請輸入10進位正整數：");
    scanf("%d",&num);

    printf("10進位\t\t16進位\n");
    printf("========================\n");

    printf("%d\t\t%X",num,num);
}
*/
/*第八題
int main(){
    float x = 0;
    printf("請輸入坪數：");
    scanf("%f",&x);

    printf("%.0f坪 = %.2f 平方公尺\n", x , x*3.306);
    printf("%.0f坪 = %.2f 平方碼\n", x , x*3.95);

    return 0 ;
}
*/
/*第九題
void main (void){
   char a, b, c;
   printf("請輸入一個字元：", a);
   scanf("%c", &a);
   fflush(stdin);
   printf("請再輸入一個字元：", b);
   scanf("%c", &b);
   printf("您輸入的兩個字元分別為%c,%c\n",a,b);
   //解釋：
   //scanf執行時，例如我們輸入123然後按下enter(\n)，stdin input：123\n，
   //scanf會擷取123，而把\n留在buffer中，所以若是我們沒有用fflush清空buffer，
   //在下一次scanf時，scanf看到Buffer中的第一個字元是\n，就會直接認為自己執行完畢，
   //而造成使用這無法輸入的情況，所以我們需要fflush(stdin)來清空buffer。
}
*/
/*第十題
void main(void){
    char str1[80];
    printf("請輸入字串：");
    fgets(str1,sizeof(str1)/4,stdin);
    printf("=====您輸入的字串如下=====\n");
    printf("str1 = %s",str1);
}
//scanf()會將空白當作是下一筆資料的分隔，而fgets不會
*/



