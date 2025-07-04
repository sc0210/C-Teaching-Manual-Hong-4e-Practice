/* prog13_5, 使用#if、#else與#endif指令 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    printf("argc的值為%d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argc[%d]=%s\n", i, argv[i]);
    }
    system("pause");
    return 0;
}
