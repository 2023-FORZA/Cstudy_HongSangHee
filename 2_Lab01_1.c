#include <stdio.h>
#include <string.h>

int coin[8];
char c[40];

int main() {
    int p;
    scanf("%d", &p);

    while (p--) {
        scanf("%s", c);
        for (int i = 0; i < 8; i++)
            coin[i] = 0;

        for (int i = 0; i < 38; i++) {
            if (c[i] == 'H') { // 菊
                if (c[i + 1] == 'H') { // 菊菊
                    if (c[i + 2] == 'H') // 菊菊菊
                        coin[7]++;
                    else // 菊菊第
                        coin[6]++;
                }
                else { // 菊第
                    if (c[i + 2] == 'H') // 菊第菊
                        coin[5]++;
                    else // 菊第第
                        coin[4]++;
                }
            }
            else { // 第
                if (c[i + 1] == 'H') { // 第菊
                    if (c[i + 2] == 'H') // 第菊菊
                        coin[3]++;
                    else // 第菊第
                        coin[2]++;
                }
                else { // 第第
                    if (c[i + 2] == 'H') // 第第菊
                        coin[1]++;
                    else // 第第第
                        coin[0]++;
                }
            }
        }

        for (int i = 0; i < 8; i++)
            printf("%d ", coin[i]);
        printf("\n");
    }

    return 0;
}
