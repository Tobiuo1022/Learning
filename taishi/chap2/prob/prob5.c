#include <stdio.h>

int main(void) {
	char str[80];
	char *p = str;

	// input into str;
	printf("半角文字で80文字以内の文字列を入力してください.\n");
	gets(str);

	while(*p != '\0') {
		p++;
	}

	// reverse and print.
	while(p > str) {
		putchar(*--p);
	}
	putchar('\n');
}
