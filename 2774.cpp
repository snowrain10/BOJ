#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        int len = str.length();
        int arr[10] = {0,};
        for (int i = 0; i < len; i++) {
            arr[str[i] - '0']++;
        }
        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            if (arr[i] >= 1) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
