#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;

const int N = 1e6 + 5;

int a[N];
int sum[N];

int main() {
    int t, n, s;
    scanf("%d", &t);
    while (t --) {
        memset(a, 0 , sizeof(a));
        memset(sum, 0, sizeof(sum));
        scanf("%d%d", &n, &s);
        for (int i = 0; i < n; i ++)
            scanf("%d", &a[i]);

        int left = 0, right = 0;
        int tmp = 0;
        // bool flag = false;
        if (sum[n - 1] < s) {
            printf("0\n");
        } else {
            int res = N + 1;
            while (1) {
                while (tmp < s && right < n)
                    tmp += a[right++];
                if (tmp < s) 
                    break;
                res = min(res, right - left);
                tmp = tmp - a[left++];
            }
            printf("%d\n", res);
        }
            
    }
    return 0;
}
    