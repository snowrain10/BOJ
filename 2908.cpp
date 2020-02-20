#include<iostream>
//pow 함수를 사용하기 위해 include
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int ra = 0, rb = 0;
    for (int i = 0; i < 3; i++) {
        //1의 자리는 10으로 나누었을때 나머지
        //pow(10,2 -i) = 10 ^ (2-i)
        //pow 함수에 전달되는 인자의 형태는 double형으로 정의
        ra += (a % 10) * pow(10, 2 - i);
        rb += (b % 10) * pow(10, 2 - i);
        //다음 10의 자리수를 추출하기 위해 10으로 나눔
        a /= 10;
        b /= 10;
    }
    if (ra > rb)
        cout << ra << "\n";
    else
        cout << rb << "\n";
    return 0;
}
