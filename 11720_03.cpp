#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    char ch[100];
    cin >> ch;

    int sum = 0;
    for (int i = 0; i < t; i++) {
        sum += ch[i] - '0';
    }
    cout << sum << "\n";
    return 0;
}
