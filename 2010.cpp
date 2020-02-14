//BOJ 2010
#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int sum = 1;
    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;
        //플러그 한개의 단자가 p개라고 할 때 이 플러그는 p-1개의 추가 단자를 제공해줍니다.
        //플러그를 끼우면서 1개의 단자를 소모
        sum += p - 1;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << sum << "\n";
    return 0;
}
