/* prog15.4, 位元欄位結構的使用 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
void show_binary(int);

int main(void)
{
    struct status {
        unsigned sex : 1;
        unsigned marriage : 1;
        unsigned age : 7;
    };

    struct status tom = {1, 0, 21};

    if (tom.sex == 0) {
        printf("性別:女, ");
    } else {
        printf("性別:男, ");
    }

    if (tom.marriage == 0) {
        printf("未婚, ");
    } else {
        printf("已婚, ");
    }

    printf("%d歲\n", tom.age);
    printf("sizeof(tom)=%d\n", (int) sizeof(tom));

    system("pause");
    return 0;
}
