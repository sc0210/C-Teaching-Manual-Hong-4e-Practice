/* prog11_11 傳遞結構的位址到函數裡 */
#include <stdio.h>
#include <stdlib.h>

struct data {
    char name[10];
    int math;
};

void swap(struct data *, struct data *);

int main(void)
{
    struct data s1 = {"Jenny", 74};
    struct data s2 = {"Teresa", 88};

    printf("呼叫swap()函數前:\n");
    printf("s1.name=%s, s1.math=%d\n", s1.name, s1.math);
    printf("s2.name=%s, s2.math=%d\n", s2.name, s2.math);

    swap(&s1, &s2);
    printf("呼叫swap()函數後:\n");
    printf("s1.name=%s, s1.math=%d\n", s1.name, s1.math);
    printf("s2.name=%s, s2.math=%d\n", s2.name, s2.math);

    system("pause");
    return 0;
}

void swap(struct data *st1, struct data *st2)
{
    struct data tmp = *st1;
    *st1 = *st2;
    *st2 = tmp;
};
