#include <iostream>

using namespace std;

int main()
{
    short int x, y;
    cin >> x >> y;
    if (x > 1 && x < 4 && y > 2 && y < 7) {
        cout << 1 << endl;
        return 0;
    } else {
        cout << 0 << endl;
        return 0;
    }
}
