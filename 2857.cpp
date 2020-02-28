#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    for (int i = 1; i <= 5; i++) {
        string str;
        cin >> str;
        if (str.find("FBI") != string::npos) {
            cout << i << " ";
            cnt = 1;
        }
    }
    if (!cnt) cout << "HE GOT AWAY!" << "\n";
    return 0;
}
