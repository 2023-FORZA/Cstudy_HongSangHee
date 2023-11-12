#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int group_num = 0;
    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);


        int alphabet[26];
        for (int j = 0; j < 26; j++) {
            alphabet[j] = 0;
        }

        int word_len = strlen(word);
        for (int k = 0; k < word_len; k++) {
            char letter = word[k];
            if (alphabet[letter - 'a'] == 0) {
                alphabet[letter - 'a'] = 1;
            }
            else {
                if (word[k - 1] != word[k])
                    break;
            }

            if (k == word_len - 1) {

                group_num++;
            }
        }
    }
    printf("%d\n", group_num);
}
