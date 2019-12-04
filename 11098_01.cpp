//BOJ 11098 첼시를 도와줘!
//참조
//https://codecollector.tistory.com/428
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p;
    cin >> n;
    while (n--) {
        cin >> p;
        //1<=p<=100 이므로 102까지 배열을 선언한다.
        string strName[102];
        int c[102];
        int max = 0, ans = 0;
        for (int i = 0; i < p; i++) {
            cin >> c[i] >> strName[i];
            //최초 0보다 큰 c[0]가 max가 된다.
            //그 다음은 다음 c[i]와 비교하여 max 결정
            if (max < c[i]) {
                max = c[i];
                ans = i;
            }
        }
        cout << strName[ans] << "\n";
    }
    return 0;
}
