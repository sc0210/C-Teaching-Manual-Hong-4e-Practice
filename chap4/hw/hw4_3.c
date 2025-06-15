#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[25], str2[25], str3[25];

    printf("Input a string: ");
    scanf("%s %s %s", str, str2, str3);
    strcat(str, str2);
    strcat(str, str3);
    printf("%s\n", str);

    system("pause");
    return 0;
}