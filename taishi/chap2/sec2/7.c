#include <stdio.h>

int main(void) {
	int data[10];
	
	for(int i=0; i<10; i++) {
		printf("整数を入力してください. \n");
		scanf("%d", &data[i]);
	}
	printf("以下が40未満の数となります.\n");
	for(int i=0; i<10; i++) {
		if(data[i] < 40) {
			printf("%d\n", data[i]);
		}
	}
}
