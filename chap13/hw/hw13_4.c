#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    /* 13.4 Ex.14 */
    // printf("ASCII code of %c is %d\n", *argv[1], *argv[1]);

    /* 13.4 Ex.14 */
    FILE *fptr;
    char ch;
    fptr = fopen(argv[1], "r");
    while ((ch = getc(fptr)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fptr);

    system("pause");
    return 0;
}