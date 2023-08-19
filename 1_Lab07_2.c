#include<stdio.h>

#include<string.h>



int main() {



	char str[100];

	int arr[26] = { 0 };



	scanf("%s", str);



	for (int j = 0; j < 26; j++)

		arr[j] = -1;



	for (int i = 0; i < strlen(str); i++) {

		if (arr[str[i] - 'a'] == -1)

			arr[str[i] - 'a'] = i;

	}



	for (int j = 0; j < 26; j++) {

		printf("%d", arr[j]);

		if (j < 25)

			printf(" ");

	}

}