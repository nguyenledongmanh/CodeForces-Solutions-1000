#include <iostream>
#include <string>
using namespace std;

bool check(string input) {
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '7' || input[i] == '4')
            continue;
        return false;
    }
    return true;
}

bool checkDivisor(int n, int divisible[]) {
    for (int i = 0; i < 12; i++) {
        if (n % divisible[i] != 0)
            continue;
        else if (divisible[i] > n)
            return false;
        return true;
    }
    return false;
}

int main() {
    int n;
    int divisible[12] = {44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    string input;
    cin >> n;
    input = std::to_string(n);
    if (check(input))
        cout << "YES";
    else {
        if (n % 7 == 0 || n % 4 == 0)
            cout << "YES";
        else
            checkDivisor(n, divisible) ? cout << "YES" : cout << "NO";
    }
    cout << endl;
    return 0;
}