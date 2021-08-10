#include <stdio.h>

struct student {
	int no;
	char name[20];
	double shintyou, taijuu;
};

int main(void) {
	struct student data[4] = {
		{1, "麻田 裕也", 168.4, 57.7}, 
		{2, "石田 純二", 175.6, 65.2}, 
		{3, "上田 正次", 170.5, 63.2}, 
		{4, "岡田 勇気", 176.1, 67.5}
	};

	// sort.
	for(int i=0; i < 4; i++) {
		for(int j=i+1; j < 4; j++) {
			if(data[i].shintyou > data[j].shintyou) {
				struct student tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}

	for(int i=0; i < 4; i++) {
		printf("name: %s, height: %3.1lf\n", data[i].name, data[i].shintyou);
	}
}
