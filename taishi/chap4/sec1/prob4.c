#include <stdio.h>

struct student {
	int no;
	char name[8];
};

int main(void) {
	struct student data[] = {
		{1001, "上田"}, 
		{1120, "三浦"}, 
		{1005, "大橋"}, 
		{1010, "木田"}, 
		{1212, "吉田"}, 
		{1013, "田中"}, 
		{1015, "工藤"}, 
		{1021, "杉浦"}, 
		{1020, "坂本"}, 
		{1022, "瀬川"}
	};

	int input;
	struct student *p = data;
	int search = 0;
	while(1) {
		// input student NO.
		printf("4桁の生徒番号を入力してください.\n");
		scanf("%d", &input);
		if(input == 9999) {
			break;
		}

		// search.
		p = data;
		search = 0; // flag.
		for(int i=0; i < 10; i++) {
			if(p -> no == input) {
				search = 1;
				break;
			}
			p++;
		}

		// print result.
		if(search) {
			printf("%s\n", p -> name);
		} else {
			printf("該当する生徒はいません.\n");
		}
	}
}
