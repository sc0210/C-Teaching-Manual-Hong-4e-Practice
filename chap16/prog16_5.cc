/* prog16_5, 函數的多載的範例--引述個數相同，但型態不同 */
#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;
void show(int);     // 宣告show(int)原型
void show(double);  // 宣告show(double)原型

int main(void)
{
    int a = 26;
    double b = 3.14;
    show(a);
    show(b);

    system("pause");
    return 0;
}

void show(int num)
{
    cout << num << "是一個整數" << endl;
}

void show(double num)
{
    cout << num << "是一個浮點數" << endl;
}
