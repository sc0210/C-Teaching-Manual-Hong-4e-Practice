/* prog6_11, switch 敘述-以不同的選擇值來處理相同的敘述 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char grade;
    printf("Input grade: ");
    scanf("%c", &grade);

    switch (grade) {
    case 'a':
    case 'A':
        printf("Excellent!\n");
        break;
    case 'b':
    case 'B':
        printf("Good!\n");
        break;
    case 'c':
    case 'C':
        printf("Be study hard!\n");
        break;
    default:
        printf("Failed!\n");
    }

    system("pause");
    return 0;
}