// 蜜柑

#include <stdio.h>

int main(void) {
	int BASIC = 546;
	int STEP1 = 18, STEP2 = 23, STEP3 = 25;
	int THRESHOLD1 = 120, THRESHOLD2 = 300;
	int watts;
	int charge;
	int st1_w = 0, st2_w = 0, st3_w = 0;

	// input into watts.
	printf("使用電力量を入力してください.\n");
	scanf("%d", &watts);
	
	// culculate charge.
	if(watts > THRESHOLD1) {
		st1_w = THRESHOLD1;
	} else {
		st1_w = watts;
	}

	if(watts > THRESHOLD2) {
		st2_w = THRESHOLD2 - THRESHOLD1;
		st3_w = watts - THRESHOLD2;
	} else {
		st2_w = watts - THRESHOLD1;
	}

	if(watts == 0) {
		charge = BASIC / 2;
	} else {
		charge = BASIC + st1_w*STEP1  + st2_w*STEP2 + st3_w*STEP3;
	}

	printf("%d\n", charge);
}
