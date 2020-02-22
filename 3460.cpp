#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int i = 0;
        while (n) {
            if (n & 1) // n % 2 과 동일
                cout << i << " ";
            n >>= 1; // n /= 2 와 동일
            i++;
        }
        cout << "\n";
    }
    return 0;
}
