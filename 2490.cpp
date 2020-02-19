#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int a;
            cin >> a;
            sum += a;
        }
        char b;
        switch (sum) {
        case 0: b = 'D'; break;
        case 1: b = 'C'; break;
        case 2: b = 'B'; break;
        case 3: b = 'A'; break;
        case 4: b = 'E'; break;
        }
        cout << b << "\n";
    }

    return 0;
}
