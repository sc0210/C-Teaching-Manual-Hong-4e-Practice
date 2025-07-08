/* prog16_7, 利用結構來表示視窗 */
#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;

struct Win {
    char id;
    int width;
    int height;
};

int area(struct Win w)
{
    return w.width * w.height;
}

int main(void)
{
    Win win1;
    win1.id = 'A';
    win1.width = 50;
    win1.height = 40;

    cout << "Window " << win1.id << ", area=" << area(win1) << endl;
    system("pause");
    return 0;
}