#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
void captureVowel(char[], int[]);

int main(void)
{
    printf("1.\n");
    char str[] = "Hello, C language";  // 18
    printf("Total bytes of \'%s\'= %d bytes\n", str, sizeof(str));

    printf("2.\n");
    char input1[MAX_SIZE];
    int cnt[5] = {0};
    puts("Input a string:");
    gets(input1);
    captureVowel(input1, cnt);

    printf("Total vowel in \'%s\', (a,e,i,o,u)=(%d,%d,%d,%d,%d)", input1,
           cnt[0], cnt[1], cnt[2], cnt[3], cnt[4]);

    return 0;
}

void captureVowel(char arr[], int cnt[])
{
    int i = 0;
    while (arr[i] != '\0') {
        switch (arr[i]) {
        case ('a'):
            cnt[0]++;
            break;
        case ('e'):
            cnt[1]++;
            break;
        case ('i'):
            cnt[2]++;
            break;
        case ('o'):
            cnt[3]++;
            break;
        case ('u'):
            cnt[4]++;
            break;
        default:
            break;
        }
        i++;
    }
}
