/* prog16_11, 函數成員的多載 */
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
    void show_area(void)
    {
        cout << "Window " << id << ", area=" << area() << endl;
    }
    void set_data(char i, int w, int h)
    {
        id = i;
        width = w;
        height = h;
    }
    void set_data(char i) { id = i; }
    void set_data(int w, int h)
    {
        width = w;
        height = h;
    }
};

void show_area(CWin win)
{
    cout << "Window " << win.id << ", area=" << win.area() << endl;
}

int main(void)
{
    CWin win1, win2;
    win1.set_data('A', 50, 40);
    win2.set_data('B');
    win2.set_data(80, 120);
    show_area(win1);
    show_area(win2);

    system("pause");
    return 0;
}