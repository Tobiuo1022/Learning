#include <stdio.h>

void kinshu(int, int *);

int main(void) {
	int num, d[10], sum[10];

	// initialize sum.
	for(int i=0; i < 10; i++) {
		sum[i] = 0;
	}

	printf("金額を入力してください. 0を入力すると終了します.\n");
	scanf("%d", &num);
	printf("10000  5000  2000  1000   500   100    50    10     5     1\n");
	
	do {
		kinshu(num, d);
		for(int i=0; i < 10; i++) {
			sum[i] += d[i];
			printf("%5d ", sum[i]);
		}
		printf("\n");
		scanf("%d", &num);
	} while(num > 0);
}
