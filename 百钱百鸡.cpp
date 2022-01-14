
//  暴力解法
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  暴力枚举

    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            for (int z = 0; z < 100; z++) {
                if ((x + y + z == 100) && (5 * x + 3 * y + z / 3 == 100) && (z % 3 == 0)) {
                    cout << "公鸡有" << x << "只"  << "母鸡有"  << y << "只" << "小鸡有"  << z << "只" << endl; 
                }
            }
        }
    }
    return 0;
}
