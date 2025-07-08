/* prog16_4, 變數宣告的位置 */
#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{
    int i = 20;

    for (int i = 0; i < 3; i++) {
        cout << "在for迴圈裡,i=" << i << endl;
    }

    cout << "for迴圈執行完後,i=" << i << endl;

    system("pause");
    return 0;
}
