#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        if (n == 2) {
            cout << 2 << endl;
            cout << 2 << " " << 1 << endl;
        }
        else {
            cout << 2 << endl;
            int a[n + 1]{0};
            int flag = 1;
            bool check = true;
            while(check) {
                if (n == 2)
                    check = false;
                if(flag % 2 == 0) {
                    if (a[n] == 0) {
                        cout << n << " " << n << endl;
                        a[n]++;
                    }
                }
                else {
                    if(a[n - 2] == 0) {
                        cout << n << " " << n - 2 << endl;
                        a[n - 2]++;
                    }
                    n -= 1;
                }
                flag++;
            }
        }
    }
    return 0;
}