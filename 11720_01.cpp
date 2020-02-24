#include<iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char str[100];
    scanf("%s", str);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += str[i] - '0';
    }
    printf("%d", sum);
    return 0;
}
