/* prog11_10 傳遞結構道涵數裡 */
#include <stdio.h>
#include <stdlib.h>

struct data {
    char name[10];
    int math;
};

void display(struct data);

int main(void)
{
    struct data s1 = {"Jenny", 74};
    display(s1);

    system("pause");
    return 0;
}

void display(struct data st)
{
    printf("學生姓名: %s\n", st.name);
    printf("學生成績: %d\n", st.math);
}