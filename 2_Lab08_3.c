#include <stdio.h>
#include <string.h>

int main() {
    int i, accept, vowel, consonants, exist;
    char pw[21];

    while (1) {
        vowel = consonants = exist = 0;
        accept = 1;
        scanf("%s", pw);

        if (strcmp(pw, "end") == 0) break;

        for (i = 0; i < strlen(pw); i++) {
            //모음일 때, 모음++, 자음=0
            //모음이 존재 -> exist =1
            if (pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u') {
                exist = 1;
                vowel++;
                consonants = 0;
            }
            //자음일 때, 자음++, 모음=0
            else {
                consonants++;
                vowel = 0;
            }

            if (vowel == 3 || consonants == 3) {
                accept = 0;
                break;
            }

            if (i < strlen(pw) - 1) {

                if (pw[i] == 'e' && pw[i + 1] == 'e' || pw[i] == 'o' && pw[i + 1] == 'o') continue;

                else if (pw[i] == pw[i + 1]) {
                    accept = 0;
                    break;
                }
            }
        }

        if (accept && exist) printf("<%s> is acceptable.\n", pw);
        else printf("<%s> is not acceptable.\n", pw);
    }
    return 0;
}
