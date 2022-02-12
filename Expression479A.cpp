#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int result;
    cin >> a >> b >> c;
    if (a == b == c == 1)
        result = 3;
    else if (a == 1 || b == 1 || c == 1) {
        if (a == 1)
            result = (b + 1) * c;
        else if (b == 1)
            if (a > c)
                result = (c + 1) * a;
            else
                result = (a + 1) * c;
        else
            result = a*(b + 1);

        if (a + b + c >= result)
            result = a + b + c;
    }
    else 
        result = a * b * c;

    cout << result << endl;
    return 0;
}