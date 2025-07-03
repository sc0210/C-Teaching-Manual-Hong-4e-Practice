/* prog12_7, 讀取二進位檔案的內容 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a, b;
    int i, arr[3];
    FILE *fptr;

    fptr = fopen("C:\\Users\\sam88\\Documents\\development\\number.bin", "rb");
    fread(&a, sizeof(double), 1, fptr);
    fread(&b, sizeof(double), 1, fptr);
    fread(arr, sizeof(int), 3, fptr);

    printf("a=%4.2f\n", a);
    printf("b=%4.2f\n", b);
    for (i = 0; i < 3; i++)
        printf("arr[%d]=%d\n", i, arr[i]);

    fclose(fptr);

    system("pause");
    return 0;
}
