/* prog10_19 以指標變數指向字串 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[20];
    char *ptr = "How are you?";
    printf("what's your name? ");
    gets(name);
    printf("Hi, %s,", name);
    puts(ptr);

    // puts(++name); // invalid
    puts(++ptr);

    system("pause");
    return 0;
}
