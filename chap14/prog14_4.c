/* prog14_4, 以動態記憶體配置鏈結串列 */
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

int main(void)
{
    int i, val, num;
    NODE *first, *current, *previous;

    printf("Number of nodes: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        current = (NODE *) malloc(sizeof(NODE));
        printf("Data for node %d: ", i);
        scanf("%d", &current->data);
        if (i == 0)
            first = current;
        else
            previous->next = current;
        current->next = NULL;
        previous = current;
    }
    current = first;
    while (current != NULL) {
        printf("address=%p, ", current);
        printf("data = %d, ", current->data);
        printf("next=%p\n", current->next);
        current = current->next;
    }

    system("pause");
    return 0;
}