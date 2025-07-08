/* prog16_6, 函數的多載的範例--引述個數不同 */
#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;
void star(void);  // 宣告star(void)原型
void star(int);   // 宣告star(int)原型

int main(void)
{
    star();
    star(9);

    system("pause");
    return 0;
}

void star(void)
{
    cout << "印出5個星號: *****" << endl;
}

void star(int num)
{
    cout << "印出" << num << "個星號: ";

    for (int i = 0; i < num; i++)
        cout << "*";
    cout << endl;
}
