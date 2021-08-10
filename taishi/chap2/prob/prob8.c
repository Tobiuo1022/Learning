#include <stdio.h>

int main(void) {
	char str1[256], str2[256];
	char *p1 = str1, *p2 = str2;
	
	// input into str.
	printf("1つ目の文字列を入力してください\n");
	gets(str1);
	printf("2つ目の文字列を入力してください\n");
	gets(str2);

	// compare str1 and str2.
	int i = 0;
	while((*p1 != '\0') && (*p2 != '\0')) {
		printf("%d文字目: ", i++);
		if(*p1 == *p2) {
			printf("同じです.\n");
		} else {
			printf("違います.\n");
		}
		p1++;
		p2++;
	}
}
