#include <iostream>

using namespace std;
// Ý tưởng là cứ tích hai số nhân với nhau là số chẵn thì sẽ thoả mãn điều kiện cần
int main() {
    int testcase;
    cin >> testcase;
    while(testcase--) {
        int n, k;
        cin >> n >> k;
        if (k == 1) {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
                cout << i << endl;
        }
        else if (k == 2 && n % 2 == 0)
        {
            cout << "YES" << endl;
            int flag = 1;
            while (n)
            {
                cout << flag << " " << flag + 2 << endl;
                cout << flag + 1 << " " << flag + 3 << endl;
                flag = flag + 4;
                n -= 2;
            }
        }
        else {
            if ((n * k) % 2 != 0 || n % 2 != 0)
                cout << "NO" << endl;
            else {
                cout << "YES" << endl;
                int flag = 1;
                while(n > 0) {
                    for (int i = 0; i < k; i++) {
                        cout << flag + 2 * i << " ";
                    }
                    cout << endl;
                    flag += 1;
                    for (int i = 0; i < k; i++) {
                        cout << flag + 2 * i << " ";
                    }
                    cout << endl;
                    flag += 2 * (k - 1) + 1;
                    n -= 2;
                }
            }
        }
    }
    
    return 0;
}
