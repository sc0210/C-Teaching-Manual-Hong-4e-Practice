/* prog16_13, 私有成員的使用範例 */
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
};


int main(void)
{
    CWin win1;
    win1.id = 'A';
    win1.width = -50;
    win1.height = 40;
    win1.show_area();

    system("pause");
    return 0;
}