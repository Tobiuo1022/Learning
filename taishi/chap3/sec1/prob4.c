#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// input into num.
	int num;
	int input;
	do {
		printf("整数を入力してください(1 ~ 1000)\n");
		scanf("%d", &input);
	} while(input < 1 || 1000 < input);
	num = input;

	// 1, 2, 3 are prime.
	if(num < 4) {
		printf("素因数: %d\n", num);
		exit(1);
	}

	// search prime factors.
	int quot;
	int rem;
	int factors[64];
	int k = 2;
	int i = 0;
	while(1) {
		quot = num / k;
		rem = num % k;

		if(rem != 0) { // can't divide.
			k++;
			continue;
		} else { // can divide.
			num = quot;
			factors[i] = k;
			i++;
		}

		// exit program.
		if(quot == 1) {
			printf("素因数: ");
			for(i -= 1; i >= 0; i--) {
				printf("%d ", factors[i]);
			}
				printf("\n");
			exit(1);
		}
	}
}
