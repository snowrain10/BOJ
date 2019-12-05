//BOJ 5635	생일
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    //vector, pair 선언
    //name - string
    //dd mm yyyy - string
    vector <pair<string, string>> s(n);
    int i = 0, max = 0, min = 0;
    //max,min date의 초기값 설정
    string maxDate = "00000000", minDate = "99999999";
    while (n--) {
        string dd, mm, yyyy;
        cin >> s[i].first >> dd >> mm >> yyyy;
        //한자리일 경우 앞자리에 0을 추가
        if (mm.size() == 1)
            mm = "0" + mm;
        if (dd.size() == 1)
            dd = "0" + dd;
        //date를 yyyymmdd로 해서 문자열 비교
        s[i].second = yyyy + mm + dd;
        if (maxDate < s[i].second) {
            maxDate = s[i].second;
            max = i;
        }
        if (minDate > s[i].second) {
            minDate = s[i].second;
            min = i;
        }
        i++;
    }
    //max - 나이가 어린 사람
    cout << s[max].first << "\n";
    //min - 나이가 많은 사람
    cout << s[min].first << "\n";
    return 0;
}
