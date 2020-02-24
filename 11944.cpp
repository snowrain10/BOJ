#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 첫번째는 문자열로 입력받음
    string N;
    int M;
    cin >> N >> M;

    int len = N.length();
    // string을 int로 변환
    int num = stoi(N);
    string result;
    // 문자열을 갯수만큼 출력했을 때, M보다 크면, M만큼만 출력
    if (len*num >= M) {
        int cnt = 0;
        while (1) {
            if (cnt + len > M)
                break;
            result += N;
            cnt += len;
        }
        for (int i = 0; i < M - cnt; i++)
            result += N[i];
    }
    else {
        for (int i = 0; i < num; i++)
            result += N;
    }
    cout << result << "\n";
    return 0;
}

// stoi = string to int
// C++11 부터 새롭게 생긴, C++의 string 클래스를 정수로 변경해주는 함수
