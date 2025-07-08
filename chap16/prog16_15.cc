/* prog16_15, 建構元的使用 */
#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;

class CWin
{
private:
    char id;
    int width, height;

public:
    CWin(char i, int w, int h)  // CWin()建構元，可接收三個引數
    {
        id = i;
        width = w;
        height = h;
        cout << "CWin 建構元被呼叫了..." << endl;
    }

    void show_member(void)  // 函數成員，用來顯示ㄌ要成員的值
    {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
    }
};


int main(void)
{
    CWin win1('A', 50, 40);
    CWin win2('B', 60, 70);
    win1.show_member();
    win2.show_member();

    system("pause");
    return 0;
}