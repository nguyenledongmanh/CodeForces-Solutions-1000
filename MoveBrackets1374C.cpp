#include <iostream>
#include <string>
using namespace std;
// Đếm số ngoặc đã thoả mãn, và ý tưởng là vì số ngoặc mở bằng số ngoặc đóng, nên vì vậy lấy n / 2 cặp ngoặc trừ đi số ngoặc đã thoả mãn là ra số ngoặc di chuyển
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        string input;
        cin >> input;
        bool check = true;
        int regular = 0;
        while (input.length() > 0 && check) {
            check = false;
            for (int i = 0; i < input.length() - 1; i++) {
                if(input[i] == '(' && input[i + 1] == ')' && input.length() > 2) {
                    input.erase(i, 2);
                    check = true;
                    regular++;                
                }
            }     
        }
        if (input.length() == 2)
            if (input[0] == '(' && input[1] == ')')
                regular++;
        int result = n / 2 - regular;
        cout << result << endl;   
    }
    
    return 0;
}