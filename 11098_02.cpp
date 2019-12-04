//BOJ 11098 첼시를 도와줘!
//vector, pair
//https://codecollector.tistory.com/428
#include <iostream>
#include <vector>
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
        //선수의 가격과 선수 이름을 Vector 및 Pair로 입력받는다.
        //선언 방법
        //vector<int> v(5);
        //기본값(0)으로 초기화된 5개의 원소를 가지는 vector v를 생성
        //pair<[type1], [type2]> p
        //사용할 데이터 타입 1, 2를 넣고 그 타입의 pair 클래스인 p를 만듦
        vector <pair<int, string>> s(p);
        //기본값(pair<0,"">)로 초기화된 p개의 원소를 가지는 vector s를 생성
        int i = 0, ans = 0, max = 0;
        while (p--) {
            //s[i].first - pair 클래스의 첫번째 인자
            //s[i].second - pair 클래스의 두번째 인자
            cin >> s[i].first >> s[i].second;
            if (s[i].first > max) {
                max = s[i].first;
                ans = i;
            }
            i++;
        }
        cout << s[ans].second << "\n";
    }
    return 0;
}
