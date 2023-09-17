#include <stdio.h>

int main() {
    int age;

    while (1) {
        scanf("%d", &age);
        if (age == 0)
            break;

        int leaves = 1;
        int v[2 * age];

        for (int i = 0; i < 2 * age; i++) {
            scanf("%d", &v[i]);
        }

        for (int i = 0; i < age; i++) {
            int splitingFactor = v[i * 2];
            int cut = v[i * 2 + 1];
            leaves = leaves * splitingFactor - cut;
        }

        printf("%d\n", leaves);
    }

    return 0;
}
