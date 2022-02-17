#include <iostream>
#include <math.h>
using namespace std;

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