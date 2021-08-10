#include <stdio.h>

int main(void) {
	char str[256];
	char *p = str;
	int large=0, small=0, number=0, misc=0;

	// input into str.
	printf("文字列を入力してください.\n");
	gets(str);

	// count.
	while(*p != '\0') {
		if(('A' <= *p) && (*p <= 'Z')) {
			large++;
		} else if(('a' <= *p) && (*p <= 'z')) {
			small++;
		} else if(('0' <= *p) && (*p <= '9')) {
			number++;
		} else {
			misc++;
		}
		p++;
	}

	// print.
	printf("大文字: %d個\n", large);
	printf("小文字: %d個\n", small);
	printf("数字: %d個\n", number);
	printf("その他: %d個\n", misc);
}
