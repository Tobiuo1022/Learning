#include <stdio.h>

int main(void) {
	int first, second;
	int *pf = &first;
	int *ps = &second;

	// input into 2 variables.
	printf("1つ目の数字を入力してください.\n");
	scanf("%d", &first);
	printf("2つ目の数字を入力してください.\n");
	scanf("%d", &second);

	if(*pf < *ps) {
		int tmp = *pf;
		*pf = *ps;
		*ps = tmp;
	}

	printf("first: %d, %x\n", first, pf);
	printf("second: %d, %x\n", second, ps);
}
