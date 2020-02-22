#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;

    int cnt = 0;
    while (N) {
        int n = N;
        vector<int> v;
        while (n) {
            v.push_back(n % 10);
            n /= 10;
        }
        //sort(v.begin(), v.end());
        //자리수 정렬은 문제에 정의되어 있지 않다.
        if (v.size() == 4) {
            
        }
        else if (v.size() == 3) {
            // 3자리일 경우만, 백의자리수-십의자리수와 십의자리수-일의자리수 체크
            if ((v[1] - v[0]) == (v[2] - v[1]))
                cnt++;
        }
        else
            // 2자리, 1자리는 모두 한 수
            cnt++;
        N--;
    }
    cout << cnt << "\n";
    return 0;
}

// 문제 : 어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
// 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
