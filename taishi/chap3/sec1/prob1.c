#include <stdio.h>
#define MAX 10

//int slen(char);

int slen(char str[32]) {
	char *p = str;

	int i = 0;
	while(*p != '\0') {
		i++;
		p++;
	}

	return i;
}


int main(void) {
	char str[32];
	
	int length;
	do {
		printf("文字列を入力してください.\n");
		gets(str);
		length = slen(str);

		if (length > MAX) {
			printf("文字数が多すぎます！\n");
		} else {
			printf("%d\n", length);
		}
	} while(length > MAX);
}
