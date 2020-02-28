#include <iostream>
#include <string>

using namespace std;

const int N=30;
const int n=2;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool a[N] = {};
    for (int i=0;i<N-2;i++) {
        int tmp;
        cin >> tmp, a[tmp-1] = true;
    }
    for (int i=0;i<N;i++) {
        if(a[i] != true) cout << i+1 << "\n";
    }
    return 0;
}
