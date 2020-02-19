#include<iostream>
using namespace std;

int main()
{
    int sum = 0, min = 100;
    for (int i = 0; i < 7; i++) {
        int a;
        cin >> a;
        if (a % 2 != 0) {
            sum += a;
            if (min > a) min = a;
        }
    }
    if (sum == 0)
        cout << "-1\n";
    else {
        cout << sum << "\n";
        cout << min << "\n";
    }
    return 0;
}
