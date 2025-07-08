/* prog16_8, 第一個類別程式 */
#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;

class CWin
{
public:
    char id;
    int width;
    int height;
    int area(void) { return width * height; }
};

int main(void)
{
    CWin win1;
    win1.id = 'A';
    win1.width = 50;
    win1.height = 40;

    cout << "Window " << win1.id << ":" << endl;
    cout << "Area = " << win1.area() << endl;
    cout << "sizeof(win1) = " << sizeof(win1) << "個位元組" << endl;

    system("pause");
    return 0;
}