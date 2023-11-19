#include <stdio.h>
#include <stdlib.h>

#define MAX_M 10
#define MAX_N 5000
#define MAX_P 500

// 참가자 정보 포인터로 선언
typedef struct {
    int id;
    int solved;
    int score;
} Participant;

// 참가자 비교 함수
int compareParticipants(const void* a, const void* b) {
    const Participant* participantA = *((const Participant**)a);
    const Participant* participantB = *((const Participant**)b);

    if (participantA->solved != participantB->solved) {
        return participantB->solved - participantA->solved;
    }
    else if (participantA->score != participantB->score) {
        return participantA->score - participantB->score;
    }
    else {
        return participantA->id - participantB->id;
    }
}

int main() {
    int K;
    scanf("%d", &K);

    for (int k = 1; k <= K; k++) {
        int M, N, P;
        scanf("%d %d %d", &M, &N, &P);

        // 참가자 정보를 가리키는 포인터 배열 선언
        Participant* participants[MAX_P];
        Participant participantObjs[MAX_P]; // 참가자 객체들을 저장할 배열

        for (int i = 0; i < P; i++) {
            participants[i] = &participantObjs[i]; // 포인터 배열 초기화
            participantObjs[i].id = i + 1;
            participantObjs[i].solved = 0;
            participantObjs[i].score = 0;
        }

        int submissionTime[MAX_P][MAX_M];
        int incorrectAttempts[MAX_P][MAX_M];
        for (int i = 0; i < P; i++) {
            for (int j = 0; j < M; j++) {
                submissionTime[i][j] = -1;
                incorrectAttempts[i][j] = 0;
            }
        }

        for (int i = 0; i < N; i++) {
            int p, m, t, j;
            scanf("%d %c %d %d", &p, &m, &t, &j);
            m -= 'A';

            if (j == 1 && submissionTime[p - 1][m] == -1) {
                participants[p - 1]->solved++;
                participants[p - 1]->score += t + incorrectAttempts[p - 1][m] * 20;
                submissionTime[p - 1][m] = t;
            }
            else if (j == 0) {
                incorrectAttempts[p - 1][m]++;
            }
        }

        qsort(participants, P, sizeof(Participant*), compareParticipants);

        printf("Data Set %d:\n", k);
        for (int i = 0; i < P; i++) {
            printf("%d %d %d\n", participants[i]->id, participants[i]->solved, participants[i]->score);
        }

        if (k < K) {
            printf("\n");
        }
    }

    return 0;
}
