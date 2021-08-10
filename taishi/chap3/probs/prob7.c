#include <stdio.h>

double average(double data[11]) {
	double avg;

	double sum = 0;
	int i = 0;
	for(; i < 10; i++) {
		if(data[i] == -1) {
			break;
		}
		sum += data[i];
	}

	avg = sum / i;
	return avg;
}

int main(void) {
	double avg;
	double data[11];
	data[10] = -1;
	
	// input into data.
	double input;
	int i = 0;
	printf("正の値を入力してください. (-1で終了します)(10個まで)\n");
	do {
		printf("%dつ目: ", i+1);
		scanf("%lf", &input);
		data[i] = input;
		i++;
	} while(input != -1 && i < 10);

	avg = average(data);
	printf("平均: %lf\n", avg);
}
