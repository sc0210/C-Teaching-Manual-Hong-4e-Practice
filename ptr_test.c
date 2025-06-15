#include <stdio.h>

int main(void){
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;

    *(ptr++)+=1;
    *(++ptr)+=1;
    // 2 2 4 4 5
    for(int i = 0 ;i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }

    short sum, s = 32767;
    printf("s= %d\n",s);

    sum = s + 1;
    printf("s+1= %d\n",sum);

    sum = s + 2;
    printf("s+2= %d\n",sum);

    char beep = '\a';
    printf("%c",beep);
    printf("ASCII of beep=%d\n",beep);

    float f = 0.111;
    printf("%e\n",f);
    printf("%f",f);

    printf("\"%d%%的學生來自小康家庭\"",25);

    return 1;
}