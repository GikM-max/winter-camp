#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* 5x < 100 所以公鸡在0~20之间
    *  3y < 100     母鸡在0~33之间
    *  z = 100 - x -y 
    */
    for (int x = 1; x < 20; x++) {
        for (int y = 1; y < 33; y++) {
            int z = 100 - x - y;
            if ((z % 3 == 0) && (5 * x + 3 * y + z / 3 == 0)) {
                cout << "公鸡有" << x << "只"  << "母鸡有"  << y << "只" << "小鸡有"  << z << "只" << endl; 
            }
        }
    }

    return 0;
}
