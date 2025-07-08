#include <cmath>
#include <cstdlib>
#include <iostream>

#define PI 3.1415

class CSphere
{
private:
    int x;
    int y;
    int z;
    int radius;

public:
    CSphere(int _x, int _y, int _z, int _radius)
    {
        x = _x;
        y = _y;
        z = _z;
        radius = _radius;
    }

    void setLocation(int _x, int _y, int _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }

    void setRadius(int _radius) { radius = _radius; }
    double volume()
    {
        double res = 4.0 / 3 * PI * pow(radius, 3);
        std::cout << "Volume= " << res << std::endl;
        return res;
    }
    void showCenter()
    {
        std::cout << "(x,y)=(" << x << "," << y << ")" << std::endl;
    }
};


int main(void)
{
    CSphere C(1, 2, 3, 4);
    C.showCenter();
    C.volume();

    system("pause");
    return 0;
}