#include<iostream>
#include<string>
#include<cmath> // pow
#include<cstdlib> // abs(int)

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    while (N--) {
        string str;
        cin >> str;
        
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            // 1번째 문자는 26^2의 자리수, 3번째는 26^0의 자리수
            sum += (str[i] - 'A') * pow(26, 2 - i);
        }
        // 4번째 문자열부터 끝까지 int로 변환
        int num = stoi(&str[4]);
        if (abs(sum - num) <= 100)
            cout << "nice" << "\n";
        else
            cout << "not nice" << "\n";
    }

    return 0;
}
