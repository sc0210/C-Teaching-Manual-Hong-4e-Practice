/* prog14_3, 建立3個節點的鏈結串列 */
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

int main(void)
{
    NODE a, b, c;
    NODE *ptr = &a;

    a.data = 12;
    a.next = &b;
    b.data = 30;
    b.next = &c;
    c.data = 64;
    c.next = NULL;

    while (ptr != NULL) {
        printf("address=%p, ", ptr);
        printf("data=%d, ", ptr->data);
        printf("next=%p\n", ptr->next);

        ptr = ptr->next;
    }


    system("pause");
    return 0;
}