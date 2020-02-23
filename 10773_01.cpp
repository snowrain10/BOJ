#include<iostream>
#include<stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int K;
    cin >> K;
    
    //stack을 int 로 선언
    stack<int> s;
    while (K--) {
        int a;
        cin >> a;
        // 0이 아니면 top에 넣고
        if (a != 0)
            s.push(a);
        // 0이면 top에서 꺼내기
        else
            s.pop();
    }
    long long sum = 0;
    // s가 비어있으면 loop 종료
    while (!s.empty()) {
        // top의 sum 구하기
        sum += s.top();
        // top 삭제
        s.pop();
    }
    cout << sum << "\n";
    return 0;
}

// https://jaimemin.tistory.com/1171
