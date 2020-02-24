#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int rev(int n)
{
    vector<int> v;
    while (n) {
        // 1의 자리부터 거꾸로 넣기
        v.push_back(n % 10);
        n /= 10;
    }
    int r = 0;
    for (int i = 0; i < v.size(); i++) {
        // 1의 자리부터 10^(3-i-1) → 10^(3-0-1)
        r += v[i] * pow(10, v.size() - i - 1);
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int X, Y;
    cin >> X >> Y;
    cout << rev(rev(X) + rev(Y)) << "\n";
    return 0;
}
