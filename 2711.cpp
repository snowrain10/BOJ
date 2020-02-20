#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int a;
        string s;
        cin >> a >> s;
        //문자열은 s[0]부터 들어가므로
        for (int i = 0; i < s.length(); i++) {
            //오타를 낸 위치는 1을 빼야 한다.
            if (i != (a - 1))
                //string s는 s[i]로 개별 출력 가능
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}
