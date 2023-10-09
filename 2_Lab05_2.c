#include <stdio.h>

struct pii {
    int first;
    int second;
};

int main() {
    int n, ans = 0, can, xd, xc, d, c;
    scanf("%d", &n);
    struct pii v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &v[i].first, &v[i].second);
    }

    for (int i = 0; i < n; i++) {
        can = 1;
        xd = v[i].first;
        xc = v[i].second;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            d = v[j].first;
            c = v[j].second;
            if (xd >= d && xc >= c) {
                can = 0;
                break;
            }
            if (xc >= c && xd >= d) {
                can = 0;
                break;
            }
        }
        if (can) ans++;
    }

    printf("%d\n", ans);

    return 0;
}
