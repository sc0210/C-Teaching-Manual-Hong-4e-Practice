#include <stdio.h>
#include <math.h>

int primer(int x);
int is_primer(int x);
int is_mer(int x);

int main(void){
    int res[9] = {0};
    int cnt = 1, num = 1;
    
    // is_mer(7);
    while(cnt < 9 ){
        if(is_primer(num)){
            if(is_mer(num)){
                printf("cnt=%d, num=%d\n",cnt,num);
                res[cnt++] = num;
            }
        }
        num++;
        // printf("cnt=%d, num=%d\n",cnt,num);
    }
    return 0;
}

int is_mer(int x){
    x++;
    return x > 0 && (x & (x-1))==0;
}

int primer(int x){
    int num = 2;
    for(int cnt = 1; cnt < x;){
        num++;
        if(is_primer(num)==1)cnt++;
    }
    printf("The %d's primer number is %d\n", x, num);
    return num;
}

int is_primer(int x){
    if(x == 1) return 0;
    if(x == 2) return 1;
    // when input is larger than 2
    for(int i = 2; i < x; i++){
        if(x % i == 0) return 0; // not primer
    }
    return 1;
}