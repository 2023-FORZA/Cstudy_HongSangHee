#include <stdio.h>
#include <string.h>
int main(void) {
	char word[101];
	int i, j, cnt = 0;
	scanf("%s", word);
	for (i = 0; i < strlen(word); i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '=' || word[i + 1] == '-') {
				cnt++;
				i++;
			}
			else	cnt++;
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == '-') {
				cnt++;
				i++;
			}
			else if (word[i + 1] == 'z') {
				if (word[i + 2] == '=') {
					cnt++;
					i = i + 2;
				}
				else	cnt++;
			}
			else	cnt++;
		}
		else if (word[i] == 'l') {
			if (word[i + 1] == 'j') {
				cnt++;
				i++;
			}
			else	cnt++;
		}
		else if (word[i] == 'n') {
			if (word[i + 1] == 'j') {
				cnt++;
				i++;
			}
			else	cnt++;
		}
		else if (word[i] == 's') {
			if (word[i + 1] == '=') {
				cnt++;
				i++;
			}
			else	cnt++;
		}
		else if (word[i] == 'z') {
			if (word[i + 1] == '=') {
				cnt++;
				i++;
			}
			else	cnt++;
		}
		else	cnt++;
	}
	printf("%d", cnt);
	return 0;
}