/* prog9_21.c, 輸入及印出字串 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[15];

    puts("What's your name?");
    gets(name);
    puts("Hi");
    puts(name);
    puts("How are you");

    system("pause");
    return 0;
}
