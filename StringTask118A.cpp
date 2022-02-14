#include <bits/stdc++.h>

using namespace std;
//Dùng để xoá các nguyên âm
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
            result += "."; //thêm dấu chấm vào sau mỗi từ không phải là nguyên âm
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    string result = Decode(input);
    // cộng thêm dấu chấm vào ban đầu để thoả mãn phải lấy slice bớt đi kí tự cuối
    cout << "." + result.substr(0, result.length() - 1) << endl;
    return 0;
}
