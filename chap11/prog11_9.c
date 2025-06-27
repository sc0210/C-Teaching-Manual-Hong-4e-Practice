/* prog11_9 以指來表示結構陣列 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main(void)
{
    struct data {
        char name[10];
        int math;
    } student[MAX] = {{"Mary", 87}, {"Flora", 93}, {"Jenny", 74}};

    int m = student->math; /* 將 m 設值為 student[0].math*/
    int index;

    for (int i = 0; i < MAX; i++) {
        if ((student + i)->math > m) {
            m = (student + i)->math;
            index = i;
        }
    }

    printf("%s 的成績最高, ", (student + index)->name);
    printf("分數為%d分\n", (student + index)->math);

    system("pause");
    return 0;
}