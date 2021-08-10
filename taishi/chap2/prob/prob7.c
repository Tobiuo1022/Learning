#include <stdio.h>

int main(void) {
	char str[256];
	char *p = str;

	// input into str.
	printf("英文を入力してください.\n");
	gets(str);

	// upcase.
	while(*p != '\0') {
		if(('a' < *p) && (*p < 'z')) {
			*p += 'A' - 'a';
		}
		p++;
	}

	// print.
	printf("%s\n", str);
}
