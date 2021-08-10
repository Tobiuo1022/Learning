#include <stdio.h>

int main(void) {
	int input;
	printf("整数を入力してください!\n");
	scanf("%d",&input);
	if (!(input%3)) {
		printf("3の倍数\n");
	}
	else {
	printf("3の倍数じゃない\n");
	}
}
