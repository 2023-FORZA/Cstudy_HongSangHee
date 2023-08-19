#include<stdio.h>
#include<stdlib.h>

int arr[10000001];
int arr2[10000001];

int compare(const void* first, const void* second)
{
    int a = *(int*)first;
    int b = *(int*)second;
    return (a > b) - (a < b);
}

int binary_search(int arr[], int len, int key) {
    int l = 0;
    int r = len - 1;
    int m;

    while (l <= r) {
        m = l + (r - l) / 2;
        if (key == arr[m])
            return 1;
        else if (key < arr[m])
            r = m - 1;
        else
            l = m + 1;
    }

    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare);

        int m;
        scanf("%d", &m);

        for (int j = 0; j < m; j++) {
            scanf("%d", &arr2[j]);
        }

        for (int i = 0; i < m; i++) {
            int ans = binary_search(arr, n, arr2[i]);
            printf("%d\n", ans);
        }
    }
    return 0;
}