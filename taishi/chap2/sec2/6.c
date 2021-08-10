#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input;
	int max = 0;
	
	while (1) {
		printf("整数を入力してください. 0以下を入力すると終了します.\n");
		scanf("%d", &input);
		if (input <= 0) {
			printf("最大値: %d\n", max);
			exit(0);
		}
		if (input >= max) {
			max = input;
		}
	}
}
