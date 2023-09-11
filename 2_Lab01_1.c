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
            if (c[i] == 'H') { // ��
                if (c[i + 1] == 'H') { // �վ�
                    if (c[i + 2] == 'H') // �վվ�
                        coin[7]++;
                    else // �վյ�
                        coin[6]++;
                }
                else { // �յ�
                    if (c[i + 2] == 'H') // �յھ�
                        coin[5]++;
                    else // �յڵ�
                        coin[4]++;
                }
            }
            else { // ��
                if (c[i + 1] == 'H') { // �ھ�
                    if (c[i + 2] == 'H') // �ھվ�
                        coin[3]++;
                    else // �ھյ�
                        coin[2]++;
                }
                else { // �ڵ�
                    if (c[i + 2] == 'H') // �ڵھ�
                        coin[1]++;
                    else // �ڵڵ�
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
