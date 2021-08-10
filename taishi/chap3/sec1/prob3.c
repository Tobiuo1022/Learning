#include <stdio.h>
#include <string.h>

void setupper(char str[64], char upper_str[64]) {
	char *p = upper_str;
	strcpy(upper_str, str);

	while(*p != '\0') {
		*p -= 'a' - 'A';
		p++;
	}
}

int main(void) {
	char str[64];
	char upper_str[64];

	printf("文字列を入力してください.\n");
	gets(str);

	setupper(str, upper_str);
	printf("変換前%s\n", str);
	printf("変換後%s\n", upper_str);
}
