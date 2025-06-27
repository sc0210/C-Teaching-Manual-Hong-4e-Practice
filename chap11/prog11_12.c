/* prog11_12 傳遞結構陣列 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 3

struct data {
    char name[10];
    int math;
};
int maximum(struct data arr[]);

int main(void)
{
    struct data arr[MAX] = {{"Marry", 87}, {"Flora", 93}, {"Jenny", 74}};
    int id = maximum(arr);

    printf("%s 的成績最高, ", (arr + id)->name);
    printf("分數為 %d分\n", (arr + id)->math);

    system("pause");
    return 0;
}

int maximum(struct data arr[])
{
    int id = 0;
    int max = 0;
    for (int i = 0; i < MAX; i++) {
        if ((arr + i)->math > max) {
            max = arr[i].math;
            id = i;
        }
    }
    return id;
};
