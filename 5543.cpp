#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> h;
    vector<int> d;
    for (int i = 0; i < 3; i++) {
        int a;
        cin >> a;
        h.push_back(a);
    }
    for (int i = 0; i < 2; i++) {
        int b;
        cin >> b;
        d.push_back(b);
    }

    sort(h.begin(), h.end());
    sort(d.begin(), d.end());

    cout << h.front() + d.front() - 50 << "\n";

    return 0;
}

// 문제 : 자신이 원하는 햄버거와 음료를 하나씩 골라 세트로 구매하면, 
//        가격의 합계에서 50원을 뺀 가격이 세트 메뉴의 가격이 된다.
