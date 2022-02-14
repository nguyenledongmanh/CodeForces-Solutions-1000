#include <iostream>

using namespace std;

void input(int a[], int n) {
    for (int i = 1; i < n; i++)
        cin >> a[i];
}

int main() {
    int n, target;
    cin >> n >> target;
    int a[n];
    input(a, n);
    int index = 1;
    bool check;
    while (index < n) {
        index = index + a[index];
        if (index == target) {
            check = true;
            break;
        }
        else if (index > target) {
            check = false;
            break;
        }
    }
    check ?  cout << "YES" : cout << "NO";
    cout << endl;
    return 0;
}