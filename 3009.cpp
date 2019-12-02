//BOJ 3009 네 번째 점
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0, y = 0, a, b;
    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        //XOR 연산
        //0 ^ N = N
        //N ^ N = 0
        x ^= a;
        y ^= b;
    }
    cout << x << " " << y << "\n";
    return 0;
}
