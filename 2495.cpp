// 연속구간
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 3; i++) {
        string str;
        cin >> str;
        
        int cnt = 1;
        int max_cnt = 1;
        for (int j = 1; j < 9; j++) {
//            if (j == 8)
//                cout << str[j] << "\n";
            if (str[j] == str[j - 1]) {
                cnt++;
            }
            else {
                if (max_cnt < cnt)
                    max_cnt = cnt;
                cnt = 1;
            }
        }
//        if (max_cnt < cnt)
//           max_cnt = cnt;
        cout << max_cnt << "\n";
    }
    return 0;
}
