#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int a[40], b[40], c[40];
    int n, m, i, j, flag;
    int h = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                flag = 1;
            }
        }
        if (flag == 0) { b[m] = a[i]; m++; c[h] = a[i]; h++; }
    }

    for (i = 0; i < m; i++) {
        flag = 0;
        for (j = 0; j < n; j++) {
            if (a[j] == b[i]) {
                flag = 1;
            }
        }
        if (flag == 0) { a[n] = b[i]; n++; c[h] = b[i]; h++; }
    }

    for (i = 0; i < h; i++) {
        printf("%d", c[i]);
        if (i < h - 1) { printf(" "); }
    }
    return 0;
}
