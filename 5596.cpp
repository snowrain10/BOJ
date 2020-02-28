#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[4]={};
    int b[4]={};
    for(int i=0;i<4;i++) {
        cin >> a[i];
    }
    for(int i=0;i<4;i++) {
        cin >> b[i];
    }
    int sumA=0;
    int sumB=0;
    for(int i=0;i<4;i++) {
        sumA+=a[i];
        sumB+=b[i];
    }
    if(sumA>=sumB) cout << sumA << "\n";
    else if(sumA<sumB) cout << sumB << "\n";
    return 0;
}
