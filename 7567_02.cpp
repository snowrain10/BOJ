//BOJ 7567 그룻
//https://github.com/ziwonii24/Algorithm/blob/master/Baekjoon/7567.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

//그릇의 높이는 3 ~ 50
char a[51];
int ans = 10;

int main(){
	scanf("%s", a);

  //그릇의 높이는 50을 넘을 수 없으므로
	for (int i = 1; i <= 50; i++) {
    //'\n' 등이 들어오면 종료
		if (a[i] != '(' && a[i] != ')') break;
		if (a[i - 1] == a[i]) ans += 5;
		else ans += 10;
	}

	printf("%d\n", ans);

	return 0;
}
