/* prog16_14, 利用公有函數存取私有成員 */
#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;

class CWin
{
private:
    char id;
    int width;
    int height;

public:
    int area(void) { return width * height; }
    void show_area(void)
    {
        cout << "Window " << id << ", area=" << area() << endl;
    }
    void set_data(char i, int w, int h)
    {
        id = i;
        if (w > 0 && h > 0) {  // 如果 w 和 h 皆 > 0
            width = w;
            height = h;
        } else {  // 如果 w 和 h 任一個 < 0
            width = 0;
            height = 0;
            cout << "input error" << endl;
        }
    }
};


int main(void)
{
    CWin win1;
    win1.set_data('A', 50, 40);
    win1.show_area();

    system("pause");
    return 0;
}