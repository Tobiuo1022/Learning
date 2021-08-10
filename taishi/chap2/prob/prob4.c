#include <stdio.h>

int main(void) {
	int data[10];
	int max = 0, min = 2147483647;

	// input into data.
	for(int i=0; i < 10; i++) {	
		printf("数字を入力してください.\n");
		scanf("%d", &data[i]);
	}

	// search max and min of data.
	for(int i=0; i < 10; i++) {
		if(data[i] > max) {
			max = data[i];
		}
		if(data[i] < min) {
			min = data[i];
		}
	}

	// print max and min.
	printf("%d, %d\n", max, min);
}
