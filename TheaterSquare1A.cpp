#include <iostream>

using namespace std;
// Để tạo thành hình vuông, nếu chia hết thì vừa khít hình vuông, nếu không chia hết thì cần thêm 1 viên gạch nữa để vừa vượt qua hình vuông ban đâù
int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long VerticalFlag, HorizontalFlag;
    if (n % a == 0)
        VerticalFlag = n / a;
    else
        VerticalFlag = n / a + 1;
    
    if (m % a == 0)
        HorizontalFlag = m / a;
    else
        HorizontalFlag = m / a + 1;
    cout << (long long) (HorizontalFlag * VerticalFlag) << endl;
    return 0;
}
