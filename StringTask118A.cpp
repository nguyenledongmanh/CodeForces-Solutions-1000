#include <bits/stdc++.h>

using namespace std;

string Decode(string input) {
    string result = "";
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a' || input[i] == 'o' || input[i] == 'y' || input[i] == 'e' || input[i] == 'u' || input[i] == 'i')
        {
            continue;
        }
        else
            result += input[i];
            result += ".";
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    string result = Decode(input);
    cout << "." + result.substr(0, result.length() - 1) << endl;
    return 0;
}