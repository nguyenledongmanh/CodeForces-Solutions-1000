#include <iostream>

using namespace std;

int main() {
    int startX = 0, startY = 0, startZ = 0;
    int point;
    cin >> point;
    while (point--) {
        int x, y, z;
        cin >> x >> y >> z;
        startX += x;
        startY += y;
        startZ += z;
    }

    bool check = (startX == 0) && (startY == 0) && (startZ == 0);
    check ? cout << "YES" : cout << "NO";
    cout << endl;
    return 0;
}