#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(string input1, string input2) {
    if (input1.length() <= input2.length())
        return true;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector<string>> satisfiedWord;
    while(m--) {
        vector <string> satisfiedPair;
        string input1, input2;
        cin >> input1 >> input2;
        if(check(input1, input2)) {
            satisfiedPair.push_back(input1);
            satisfiedPair.push_back(input2);
        }
        else {
            satisfiedPair.push_back(input2);
            satisfiedPair.push_back(input1);
        }
        satisfiedWord.push_back(satisfiedPair);
    }
    
    while(n--) {
        string input;
        cin >> input;
        for (auto item : satisfiedWord)
            if (input.compare(item[0]) == 0 || input.compare(item[1]) == 0) {
                cout << item[0] << " ";
                break;
            }
    }
    cout << endl;
    return 0;
}