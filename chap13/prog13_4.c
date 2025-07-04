/* prog13_4, 使用#ifdef、#else與#endif指令 */
#include <stdio.h>
#include <stdlib.h>
#define STR "Hello C languge.\n"

int main(void)
{
#ifdef STR
    printf(STR);
#else
    printf("STR 沒有被定義\n");
#endif

    system("pause");
    return 0;
}
