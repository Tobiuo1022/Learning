#include <stdio.h>

int main(void) {
	char *ETO[12] = {"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥"};
	int year;

	// input into year.
	printf("西暦を入力してください.\n");
	scanf("%d", &year);

	int diff = year - 1900;
	printf("%s\n", ETO[diff%12]);
}
