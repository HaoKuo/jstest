#include <iostream>
using namespace std;

int main()
{
    int currVal = 0, val = 0;
    if (cin >> currVal){
        int cnt = 0;
        while (cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                cout << currVal << " occurs "
                     << cnt << " times" << endl;
                     currVal = val;
                     cnt = 1;
            }
        }

    }
    return 0;
}