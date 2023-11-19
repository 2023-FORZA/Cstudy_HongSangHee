#include <stdio.h>

#define MAX_SIZE 1001

double arr[MAX_SIZE];

//
void sort(double arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    double w;
    while (1) {
        int n, m, i, f;
        scanf("%d %d %lf", &n, &m, &w);
        if (!n && !m) {
            break;
        }
        f = 0;
        for (i = 0; i < n; i++) {
            scanf("%lf", &arr[i]);
        }
        sort(arr, n);
        for (i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] > w) {
                break;
            }
        }
        if (i == n && arr[0] <= w / 2 && arr[n - 1] >= 75 - w / 2) {
            f++;
        }
        n = m;
        for (i = 0; i < n; i++) {
            scanf("%lf", &arr[i]);
        }
        sort(arr, n);
        for (i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] > w) {
                break;
            }
        }
        if (i == n && arr[0] <= w / 2 && arr[n - 1] >= 100 - w / 2) {
            f++;
        }
        if (f > 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
