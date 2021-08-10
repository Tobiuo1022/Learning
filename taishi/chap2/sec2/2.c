#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int yr;
	printf("閏判定プログラム\n");
	printf("判定したい年を西暦で入力してください.\n");
	scanf("%d", &yr);
	bool isuruu = (yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0);
	if (isuruu) {
		printf("閏年\n");
	} else {
		printf("閏年ではない\n");
	}
}
