#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    vector<int> v;
    for (int i = 0; i<N; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cnt = 0;
    for (int i = N-1; i >= 0; i--) {
        // 금액을 동전으로 나눈 수 => 동전 수
        cnt += K / v[i];
        //cout << "i=" << i << " K=" << K << " v[N-i]=" << v[N - i]
        //    << " K%v[N-i]=" << K%v[N - i] << " cnt=" << cnt << "\n";
        // 금액을 동전으로 나눈 나머지로 다음 동전 수 확인
        K %= v[i];
        // K == 0 이면 중지
        if (!K) break;
    }
    cout << cnt << "\n";
    return 0;
}

// https://eunhyejung.github.io/algorithm/2018/07/18/boj-11047-problem-solving.html
// 이렇게 현재 주어진 조건중 가장 최선이라 생각한 선택을 하는 알고리즘을 그리디 알고리즘(Greedy Algorithm)이라고 한다.
// 그리디 알고리즘은 그 순간에는 최선의 선택을 하지만, 그렇게 구한 결과가 항상 최적의 해라는 보장이 없다.그러므로, 구한 해가 최적의 해인지에 대한 검증이 필요하다.

// 이 문제가 그리디 알고리즘을 이용해 해가 구해진것은 주어진 거스름돈 동전들이 서로 배수를 이루고 있기에 가능하다.
// 만약, k가 10이고, 동전의 종류가{ 6, 5, 2, 1 }이 되는 경우(6, 2, 2) -> 3개, (5, 5) -> 2개 가 되므로, 가장 큰 가치를 지닌 6을 선택하는것이 최적의해가 될수 없기 때문이다.

