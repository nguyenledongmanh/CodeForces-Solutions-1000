#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while(testcase--) {
            int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int idx[n]{0};
        for (int i = 0; i < n; i++) {
            if(s[i] == t[i])
                idx[i]++;
        }
        vector <int> index;
        for (int i = 0; i < n; i++) {
            if (idx[i] == 0)
                index.push_back(i);
        }
        if(index.size() > 2 || index.size() < 2)
            cout << "No";
        else {
            if(s[index[0]] == s[index[1]] && t[index[0]] == t[index[1]])
                cout << "Yes";
            else
                cout << "No";
        }
        cout << endl;
    }
    return 0;
}