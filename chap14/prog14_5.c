/* prog14_5,鏈結串列的建立、列印雨季體的釋放 */
#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"


int main(void)
{
    NODE *first;
    int arr[] = {14, 27, 32, 46};
    first = createlsit(arr, (int) sizeof(arr) / sizeof(arr[0]));
    printList(first);
    freeList(first);

    system("pause");
    return 0;
}

/* 串列建立函數 */
NODE *createlsit(int *arr, int len)
{
    int i;
    NODE *first, *current, *previous;

    for (i = 0; i < len; i++) {
        current = (NODE *) malloc(sizeof(NODE));
        current->data = arr[i];
        if (i == 0)
            first = current;
        else
            previous->next = current;
        current->next = NULL;
        previous = current;
    }
    return first;
};

/* printList()，串列列印函數 */
void printList(NODE *first)
{
    NODE *node = first;
    if (first == NULL)
        printf("List is empty!\n");
    else {
        while (node != NULL) {
            // printf("address=%p, ", node);
            printf("%3d", node->data);
            // printf("next=%p\n", node->next);
            node = node->next;
        }
        printf("\n");
    }
};

/* freeList()，釋放記憶體空間函數*/
void freeList(NODE *first)
{
    NODE *current, *tmp;
    current = first;
    while (current != NULL) {
        tmp = current;
        current = current->next;
        free(tmp);
    }
};

/* insetNode()，可在node之後加入一個新的節點*/
void insertNode(NODE *node, int item)
{
    NODE *newnode;
    newnode = (NODE *) malloc(sizeof(NODE));
    newnode->data = item;
    newnode->next = node->next;
    node->next = newnode;
};

/* searchNode()函數，可傳回第一個存放item之節點的位址*/
NODE *searchNode(NODE *first, int item)
{
    NODE *node = first;

    while (node != NULL) {
        if (node->data == item)
            return node;
        else
            node = node->next;
    }
    return NULL;
};
