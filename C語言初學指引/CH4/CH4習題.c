#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* �Ĥ@�D
int main(){
    printf("���魰��\"25%%\"�A�Чⴤ���|");
    return 0;
}
*/

/* �ĤG�D
int main(){
    printf("\\t�Otab�䪺�ĪG");
    return 0;
}
*/

/*�ĤT�D
int main(){
    float a = 12.38;
    printf("%+010.4f\n",a);
    return 0;
}
*/
/*�ĥ|�D
int main(){
    char *name = (char*)malloc(sizeof(char));
    int grade_cs = 0, grade_math = 0, grade_english = 0;
    printf("�п�J�m�W�G");
    scanf("%s",name);

    printf("�п�J�p�����Z�G");
    scanf("%d", &grade_cs);

    printf("�п�J�ƾǦ��Z�G");
    scanf("%d", &grade_math);

    printf("�п�J�^�妨�Z�G");
    scanf("%d", &grade_english);

    printf("�έp��..................\n");
    printf("%s�����Z�p�U�G\n",name);
    printf("= = = = = = = = = = = = = = =\n");

    printf("\t�p���G%d\n", grade_cs);
    printf("\t�ƾǡG%d\n", grade_math);
    printf("\t�^��G%d\n", grade_english);
    printf("------------------------\n");
    int total_grade = grade_cs + grade_math + grade_english;
    printf("\t�`���G%d\n", total_grade);
    printf("\t�����G%.2f\n",(float)total_grade / 3);
    return 0;
}
*/
/*�Ĥ��D
int main(){
    char *name = (char*)malloc(sizeof(char));
    char *grade_cs = (char*)malloc(sizeof(char));
    char *grade_math = (char*)malloc(sizeof(char));
    char *grade_english = (char*)malloc(sizeof(char));

    printf("�п�J�m�W�G");
    fgets(name, 20, stdin);

    name[strcspn(name, "\n")] = '\0';
    // http://tw.gitbook.net/c_standard_library/c_function_strcspn.html
    //C�w��� size_t strcspn(const char *str1, const char *str2)
    //�p��str1���_�l�q���ק����]�t�bstr2�����r��
    printf("�п�J�p�����Z�G");
    fgets(grade_cs, 20, stdin);

    printf("�п�J�ƾǦ��Z�G");
    fgets(grade_math, 20, stdin);

    printf("�п�J�^�妨�Z�G");
    fgets(grade_english, 20, stdin);

    printf("�έp��..................\n");
    printf("%s�����Z�p�U�G\n",name);
    printf("= = = = = = = = = = = = = = =\n");

    printf("\t�p���G%s\n", grade_cs);
    printf("\t�ƾǡG%s\n", grade_math);
    printf("\t�^��G%s\n", grade_english);
    printf("------------------------\n");
    int total_grade = atoi(grade_cs) + atoi(grade_math) + atoi(grade_english);
    printf("\t�`���G%d\n", total_grade);
    printf("\t�����G%.2f\n",(float)total_grade / 3);
    return 0;
}
*/
/*�Ĥ��Dtest
//strcspan(char *1 , char *2)�G��X�Ĥ@�ӦP�ɦbChar 1 �M Char 2 ����char��index(char 1 ��)
//strspan(char *1, char *2):��X�Ĥ@�ӦP�ɤ��bchar1 �M char 2����char ��index
int main(){
    char *name = (char*)malloc(sizeof(char));
    int a = 0;
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("%c\n",name[5]);
    return 0;

}
*/

/*�Ĥ��D
int main(){
    float x = 0;                   // double x = 0;
    printf("�п�J�ƭȡG");
    scanf("%f",&x);                //scanf("%lf", &x); lf�f�tdouble
                                   //https://bbs.csdn.net/topics/20419382
    printf("%f���T���謰%f\n",x,x*x*x);
    return 0;
    }

    */
/*�ĤC�D
int main(){
    int num = 0;
    printf("�п�J10�i�쥿��ơG");
    scanf("%d",&num);

    printf("10�i��\t\t16�i��\n");
    printf("========================\n");

    printf("%d\t\t%X",num,num);
}
*/
/*�ĤK�D
int main(){
    float x = 0;
    printf("�п�J�W�ơG");
    scanf("%f",&x);

    printf("%.0f�W = %.2f ���褽��\n", x , x*3.306);
    printf("%.0f�W = %.2f ����X\n", x , x*3.95);

    return 0 ;
}
*/
/*�ĤE�D
void main (void){
   char a, b, c;
   printf("�п�J�@�Ӧr���G", a);
   scanf("%c", &a);
   fflush(stdin);
   printf("�ЦA��J�@�Ӧr���G", b);
   scanf("%c", &b);
   printf("�z��J����Ӧr�����O��%c,%c\n",a,b);
   //�����G
   //scanf����ɡA�Ҧp�ڭ̿�J123�M����Uenter(\n)�Astdin input�G123\n�A
   //scanf�|�^��123�A�ӧ�\n�d�bbuffer���A�ҥH�Y�O�ڭ̨S����fflush�M��buffer�A
   //�b�U�@��scanf�ɡAscanf�ݨ�Buffer�����Ĥ@�Ӧr���O\n�A�N�|�����{���ۤv���槹���A
   //�ӳy���ϥγo�L�k��J�����p�A�ҥH�ڭ̻ݭnfflush(stdin)�ӲM��buffer�C
}
*/
/*�ĤQ�D
void main(void){
    char str1[80];
    printf("�п�J�r��G");
    fgets(str1,sizeof(str1)/4,stdin);
    printf("=====�z��J���r��p�U=====\n");
    printf("str1 = %s",str1);
}
//scanf()�|�N�ťշ�@�O�U�@����ƪ����j�A��fgets���|
*/



