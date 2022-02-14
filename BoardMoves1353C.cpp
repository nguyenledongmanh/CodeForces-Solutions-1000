#include <iostream>

using namespace std;
//Ý tưởng để làm bài này là đưa các số về vị trí giữa, space là khoảng cách, khoảng cách này sẽ là số chạy từ giữa đến hàng đang khảo sát
// Ví dụ ma trận 5x5
/*
    1       2       3       4       5
    6       7       8       9       10
    11      12      13      14      15
    16      17      18      19      20
    21      22      23      24      25

    ý tưởng sẽ đưa về vị trí số 13 giả sử đi từ số 13 ra 1 khoảng cách thì xung quanh có 9 số và khoarng cách đến mỗi số là 1
    tiếp theo từ số đường bao số 2 hay hình vuông số 2 khoảng cách đến 13 là 2 đơn vị, với mọi các điểm nằm trên hình vuông thứ 2 và số phần tử còn lại là (5^2 - 3^2)
    vậy rút ra số hạng tổng quát là u_n = u_(n-1) + [n/2]((n + 2)^2 - n^2)
*/
int main() {
    int test;
    cin >> test;
    while(test--) {
        long long n;
        cin >> n;
        unsigned long long int space = 1;
        unsigned long long int result = space * 9;
        if (n == 1) {
            result = 0;
        }
        else {
            space = 2;
            for (unsigned long long int i = 3; i < n; i = i + 2) {
                result += (unsigned long long int) ((i + 2) * (i + 2) - i * i) * space;
                space++;
            }
            result = (unsigned long long int) (result - 1);
        }

        cout << result << endl;
    }
    
    return 0;
}