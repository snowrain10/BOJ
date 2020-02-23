#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vW;
    vector<int> vK;
    for (int i=0; i<10; i++) {
        int w;
        cin >> w;
        vW.push_back(w);
    }
    for (int i=0; i<10; i++) {
        int k;
        cin >> k;
        vK.push_back(k);
    }
    int sumW = 0, sumK = 0;
    sort(vW.begin(), vW.end(), greater<int>());
    sort(vK.begin(), vK.end(), greater<int>());
    for(int i=0; i<3; i++) {
        sumW += vW[i];
        sumK += vK[i];
    }
    cout << sumW << " " << sumK << "\n";
    return 0;
}
