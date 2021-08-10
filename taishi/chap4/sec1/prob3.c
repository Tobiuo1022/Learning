#include <stdio.h>

struct student {
	char name[32];
	int math;
	int english;
};

int main(void) {
	struct student data[4] = {
		{"浅岡 真一", 88, 75}, 
		{"石田 次郎", 79, 84}, 
		{"上岸 真一", 92, 93},
		{"菊池 雄大", 80, 75}
	};

	struct student *p = data;

	int sum;
	for(int i=0; i < 4; i++) {
		sum = 0;
		sum += p -> math;
		sum += p -> english;
		printf("名前: %s, 合計点: %d\n", p -> name, sum);
		p++;
	}

	p = data;
	sum = 0;
	for(int i=0; i < 4; i++) {
		sum += p -> math;
	}
	float math_avg = sum / 4;
	printf("数学の平均点: %3.1f\n", math_avg);

	p = data;
	sum = 0;
	for(int i=0; i < 4; i++) {
		sum += p -> english;
	}
	float english_avg = sum / 4;
	printf("数学の平均点: %3.1f\n", english_avg);
}
