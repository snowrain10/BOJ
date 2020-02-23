#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    string alpha = "abcdefghijklmnopqrstuvwxyz";

    // 알파벳의 갯수 만큼 -1 로 초기화
    vector<int> v(alpha.size(), -1);
//    for (int i = 0; i < alpha.size(); i++) {
//        v.push_back(-1);
//   }

    for (int i = 0; i < alpha.size(); i++) {
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == alpha[i]) {
                v[i] = j;
                break;
            }
        }
    }
    for (int i = 0; i < alpha.size(); i++) {
        cout << v[i] << " ";
    }    

    return 0;
}

// 알파벳 수 26
