#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

const int L = 1e5 + 5;
const int N = 105;

int sub[L];

int main()
{
    // memset(sub, 1, sizeof(Sub));
    int l, n;
    scanf("%d%d", &l, &n);
    int left, right;
    for (int i = 0; i < n; i ++) {
        scanf("%d%d", &left, &right);
        sub[left] -=1;
        sub[right+1] += 1;
    }
    int cnt = 0;
    for (int i = 1; i <= l; i ++) {
        sub[i] = sub[i] + sub[i-1];
    }
    for (int i = 0; i <= l; i ++) {
        if (sub[i] == 0) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}