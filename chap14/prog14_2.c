/* prog14_2, 配置記憶體空間給結構變數 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, i;
    struct student {
        char name[10];
        int score;
    } *ptr;

    printf("Numeber of student: ");
    scanf("%d", &num);

    ptr = (struct student *) malloc(num * sizeof(struct student));

    for (i = 0; i < num; i++) {
        fflush(stdin);
        printf("name for student %d: ", i + 1);
        gets((ptr + i)->name);
        printf("score for the student %d: ", i + 1);
        scanf("%d", &(ptr + i)->score);
    }

    for (i = 0; i < num; i++) {
        printf("%s: score=%d\n", (ptr + i)->name, (ptr + i)->score);
    }

    system("pause");
    return 0;
}