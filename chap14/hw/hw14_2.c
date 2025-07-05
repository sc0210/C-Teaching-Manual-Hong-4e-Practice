/* prog14_5,鏈結串列的建立、列印雨季體的釋放 */
#include <stdio.h>
#include <stdlib.h>
#include "../linklist.h"

int *insertElement(int *arr, int item, int pos, int length);

int main(void)
{
    int arr[] = {14, 27, 32, 46};

    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d, addr=%p\n", i, *(arr + i), (arr + i));
    }

    int *newArr = insertElement(arr, 4, 2, 4);

    for (int i = 0; i < 5; i++) {
        printf("newArr[%d]=%d, newArr=%p\n", i, *(newArr + i), (newArr + i));
    }

    system("pause");
    return 0;
}

int *insertElement(int *arr, int item, int pos, int length)
{
    int UpdateLength = length + 1;
    int *newArr = (int *) malloc(sizeof(int) * UpdateLength);
    int *ptr = newArr;
    for (int i = 0; i < UpdateLength; i++) {
        if (i < pos)
            newArr[i] = *(arr + i);
        else if (i == pos)
            newArr[i] = item;
        else
            newArr[i] = *(arr + i - 1);
    }
    for (int i = 0; i < UpdateLength; i++) {
        printf("newArr[%d]=%d, addr=%p\n", i, newArr[i], &newArr[i]);
    }
    // free(newArr);
    arr = newArr;

    return newArr;
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
