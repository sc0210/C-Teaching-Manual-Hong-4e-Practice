/* 4.1 printf() 練習 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char greeting[25] = "I love C language best";
    printf("%s\n", greeting);
    printf("\"%s\"\n", greeting);
    printf("\"%s\"\n\"%s\"\n", "Hello, C", "Hello, World");
    printf("\"100/4=%d\"\n", 100 / 4);
    printf("'30%%的學生來自中部地區，42%%的學生來自南部地區'\n");

    double num1 = 28.47f, num2 = 12.34f;
    printf("num=%07.2f\n", num1);
    printf("num=%+08.2f\n", num2);

    char greeting2[50] = "There is an old saying,\"Love me, love my dog.\"";
    printf("%s\n", greeting2);


    system("pause");
    return 0;
}