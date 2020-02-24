#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // 1 ≤ N, M ≤ 2016
    // 첫번째는 문자열로 입력
    string N;
    int M;
    cin >> N >> M;

    // string을 int로 변환
    int num = stoi(N);
    int len = N.size();

    // N을 N번(num) 출력
    string str;    
    for (int i = 0; i < num; i++) {
        str += N;
    }
    // N을 N번(num) 출력하는 길이와 M 비교하여 최소값 산출
    int k = min(num*len, M);
    for (int i = 0; i < k; i++) {
        cout << str[i];
    }
    cout << "\n";
    return 0;
}
