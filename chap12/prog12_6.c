/* prog12_6, 輸入資料到二進位的檔案 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a = 3.14, b = 6.28;
    int arr[] = {12, 43, 64};

    FILE *fptr;

    fptr = fopen(
        "C:\\Users\\sam88\\Documents\\development\\C-"
        "langugage\\chap12\\data\\number.bin",
        "wb");
    fwrite(&a, sizeof(double), 1, fptr);
    fwrite(&b, sizeof(double), 1, fptr);
    fwrite(arr, sizeof(int), 3, fptr);

    fclose(fptr);
    printf("檔案寫入完成!!\n");

    system("pause");
    return 0;
}
