#include<iostream>
using namespace std;

// 1000%42 = 23 이므로 100 이하의 수
int b[100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    for (int i = 0; i < 10; i++) {
        cin >> a;
        // 42로 나눈 나머지가 있으면 갯수++
        b[a % 42] ++ ;
    }
    int c = 0;
    for (int i = 0; i < 100; i++) {
        // 갯수가 0이 아니면 서로 다른 수가 존재
        if (b[i] != 0) c++;
    }
    cout << c << "\n";
    return 0;
}
