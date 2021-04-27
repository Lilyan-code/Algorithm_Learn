#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

const int L = 1e5 + 5;
const int N = 105;

int a[L];

int main()
{
    // memset(a, 2, sizeof(a));
    
    int l, n;
    scanf("%d%d", &l, &n);
    fill(a, a + l + 1, 2);
    int flag, left, right;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i ++) {
        scanf("%d%d%d", &flag, &left, &right);
        if (flag) {
            for (int j = left; j <= right; j ++) {
                if (a[j] == 0)
                    a[j] = 1;
            }
        } else {
            for (int j = left; j <= right; j ++) {
                if (a[j] == 1)
                    cnt2++;
                a[j] = 0;
                    
            }
        }
    }
    

    // for (int i = 0; i <= l; i ++)
    //     printf("%d ", a[i]);

    // printf("\n");

    for (int i = 0; i <= l; i ++) {
        if (a[i] == 1) {
            cnt1++;
        } 
    }
    printf("%d\n%d", cnt1, cnt2);
    return 0;
}