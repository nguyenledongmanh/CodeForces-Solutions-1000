#include <iostream>
#include <math.h>
using namespace std;
// ý tưởng, số mà càng chia được cho nhiều số thì số đó càng lớn
// dựa vào giả thiết, ít nhất kết quả phải chia được cho 4 số. Nên do đó, ta có 1 và chính nó là đã có 2 ước, vậy cần 2 ước nữa, để có 2 ước, thì 2 số nhân
// với nhau thì 2 số đều là số nguyên tố, và cách nhau 1 khoảng >= d.
bool checkPrime(int numCheck) {
    for (int i = 2; i <= sqrt(numCheck); i++)
        if (numCheck % i == 0)
            return true;
    return false;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int d;
        cin >> d;
        long long result;
        int start = 1 + d;
        while(checkPrime(start))
            start++;
        int nextStep = start + d;
        while (checkPrime(nextStep))
            nextStep++;
        result = start * nextStep;
        cout << result << endl;
    }
    return 0;
}
