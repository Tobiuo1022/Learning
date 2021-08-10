#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 256

void mojicmp(char str1[STRSIZE], char str2[STRSIZE], int diff[STRSIZE]) {
	int i=0, j=0;
	while(str1[i] != '\0') {
		if(str1[i] != str2[i]) {
			// insert index of different char into diff.
			diff[j] = i;
			j++;
		}
		i++;
	}

	// insert termination signal into diff.
	diff[j] = -1;
}

int main(void) {
	char str1[STRSIZE], str2[STRSIZE];
	int diff[STRSIZE];

	// initilize diff.
	for(int i=0; i < STRSIZE; i++) {
		diff[i] = 0;
	}
	
	// input into str1 and str2.
	printf("1つ目の文字列を入力してください.\n");
	gets(str1);
	printf("2つ目の文字列を入力してください.\n");
	gets(str2);

	mojicmp(str1, str2, diff);

	// when str1 is the same str2.
	if(diff[0] == -1) {
		printf("同じです.\n");
		exit(0);
	}

	// print indexes of different char.
	int i=0;
	while(diff[i] != -1) {
		printf("%d文字目が違います.\n", diff[i]+1);
		i++;
	}
}
