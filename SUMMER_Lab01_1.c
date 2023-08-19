#include<stdio.h>

int main() {
    char king[3];
    char rock[3];
    int n;
    char move[3];
    int move_num[2];
    int i, j;

    scanf("%s", king);
    scanf("%s", rock);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", move);
        move_num[0] = 0;
        move_num[1] = 0;
        for (j = 0; j < 3; j++) {
            switch (move[j]) {
            case 'R':
                move_num[0]++;
                break;
            case 'L':
                move_num[0]--;
                break;
            case 'T':
                move_num[1]++;
                break;
            case 'B':
                move_num[1]--;
                break;
            }
        }
        king[0] = king[0] + move_num[0];
        king[1] = king[1] + move_num[1];
        if (!('A' <= king[0] && king[0] <= 'H') || !('1' <= king[1] && king[1] <= '8')) {
            king[0] = king[0] - move_num[0];
            king[1] = king[1] - move_num[1];
        }
        if (king[0] == rock[0] && king[1] == rock[1]) {
            rock[0] = rock[0] + move_num[0];
            rock[1] = rock[1] + move_num[1];
            if (!('A' <= rock[0] && rock[0] <= 'H') || !('1' <= rock[1] && rock[1] <= '8')) {
                king[0] = king[0] - move_num[0];
                king[1] = king[1] - move_num[1];
                rock[0] = rock[0] - move_num[0];
                rock[1] = rock[1] - move_num[1];
            }
        }
    }
    printf("%s\n%s", king, rock);

    return 0;
}