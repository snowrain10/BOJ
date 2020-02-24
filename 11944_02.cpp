#include<iostream>
#include<cstring> // strlen 함수
#include<cstdlib> // atoi 함수
#include<algorithm> // min 함수

using namespace std;

char n[5];
int m;

int main()
{
    scanf("%s %d", n, &m);

    int sz = strlen(n);
    // char를 int로 변환
    int val = atoi(n);
    int k = min(sz*val, m);

    for (int i = 0; i < k; i++) {
        // n = 200 일때, sz = 3
        // i = 0, i%sz = 0
        // i = 1, i%sz = 1
        // i = 2, i%sz = 2
        // i = 3, i%sz = 0
        // ... 반복
        printf("%c", n[i%sz]);
    }
    return 0;
}
