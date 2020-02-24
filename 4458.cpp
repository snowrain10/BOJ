#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    string tmp;
    // cin이 무시한 개행 문자를 처리한다.
    getline(cin, tmp);

    while (N--) {
        string str;
        // \n이 나올때까지 입력받는다.
        getline(cin, str);

        // a~z 사이일 경우만 아스키 코드로 32를 빼서 대문자로 변경한다.
        if (str[0] >= 'a' && str[0] <= 'z') {
            str[0] = str[0] - 32;
        }
        cout << str << "\n";
    }
    
    return 0;
}



// 문제 : 첫 글자를 대문자로
// 공백이 포함되어 있다.

// cin
// - <iostream> 에 존재
// - 표준 입력 버퍼에서 개행 문자를 제외한 값을 가져옴
// - 공백, 개행 무시
// - 개행 키보드 버퍼에 남겨둠
// - space 단위로 끊어서 입력 받을 수 있다
// 출처 : https ://luyin.tistory.com/334 [Luyin]

// std::getline(cin, str)
// - 첫 번째 인자로 istream 객체 (키보드로 입력받는 경우 cin객체를 쓰면 된다.)
// - 두 번째 인자로 string 변수의 이름
// - 세 번째 인자로 delimitChar가 들어가게 되는데 생략이 가능하며 default로 '\n'가 들어간다.
// - 즉, istream 객체에서 character를 delimitChar를 만날때까지 읽어 string 변수에 저장하는 의미이다.
// - 이를 잘 활용하면 delimitChar에 들어가는 인자를 ' '로 줘서 공백 기준으로 끊어 입력받는 code도 만들 수 있을 것이다.
// 출처: https ://shjz.tistory.com/96 [밤머리 이야기]
