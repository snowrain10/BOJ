#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string strA;
    string strB;
    cin >> strA >> strB;
    int flag = 0;
    for (int i = 0; i < strA.size(); i++) {
        if ((strA[i] == strB[i]) ^ !(N & 1)) {
            cout << "Deletion failed" << "\n";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Deletion succeeded" << "\n";
    return 0;
}
