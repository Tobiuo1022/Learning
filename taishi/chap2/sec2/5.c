#include <stdio.h>

int main(void) {
	int a, b;
	float ans;
	printf("a ÷bの計算を行います.\n");
	printf("整数aを入力してください.\n");
	scanf("%d", &a);
	while (1) {
		printf("整数bを入力してください.\n");
		scanf("%d", &b);
		if (b==0) {
			printf("0では割り切れません!\n");
			continue;
		}
		break;
	}
	ans = (float)a / (float)b;
	printf("%f\n", ans);
}
