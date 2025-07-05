/* linklist.h, 鏈結串列的標頭檔 */
struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *createlsit(int *, int);
void printList(NODE *);
void freeList(NODE *);
void insertNode(NODE *, int);
NODE *searchNode(NODE *, int);
NODE *deleteNode(NODE *, NODE *);