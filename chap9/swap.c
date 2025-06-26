#include <stdio.h>
#include <stdlib.h>

void swap1(int *, int *);
void swap2(int *, int *);
void show(int);

int main()
{
    int a, b;
    printf("//Before swap1: \n");
    a = 1500, b = 10;
    show(a);
    show(b);
    printf("//After swap1: \n");
    swap1(&a, &b);
    show(a);
    show(b);

    printf("===================\n");
    printf("//Before swap2: \n");
    show(a);
    show(b);
    a = 1500, b = 10;
    printf("//After swap2: \n");
    swap2(&a, &b);
    show(a);
    show(b);
}

void swap1(int *a, int *b)
{
    printf("  =======Inside=====\n");
    show(*a);
    show(*b);
    int *tmp = a;
    a = b;
    b = tmp;
    show(*a);
    show(*b);
    printf("  =======Inside=====\n");
}

void swap2(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void show(int a)
{
    printf("addr of %d = %p\n", a, &a);
}