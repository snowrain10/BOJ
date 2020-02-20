#include<iostream>
using namespace std;

int s[10];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    // 세 수의 입력, 한 줄에 하나씩
    cin >> a >> b >> c;
    // a,b,c : 100 ~ 1000 (보다 작음)
    int d = a*b*c;
    while(d) {
        // d%10 = 1의 자리
        s[d % 10]++;
        // 다음 1의 자리를 뽑아내기 위해 나누기
        d /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << s[i] << "\n";
    }

    return 0;
}
