#include<iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d\n", &n);
    int sum = 0;
    while (n--) {
        char ch;
        scanf("%c", &ch);
        sum += ch - '0';
    }
    printf("%d\n", sum);
    return 0;
}
