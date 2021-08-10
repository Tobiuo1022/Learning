#include <stdio.h>

struct member {
	int no;
	char name[32];
	int age;
	char sex;
};

int main(void) {
	struct member data[5] = {
		{1, "渡辺 一夫", 16, 'm'}, 
		{2, "浅田 祐子", 20, 'f'},
		{3, "篠田 浩二", 17, 'm'},
		{4, "遠藤 雄一", 19, 'm'},
		{5, "堀田 美香", 18, 'f'}
	};

	char input;
	do {
		printf("絞り込む性別を指定してください.(m or f)\n");
		input = getchar();
	} while(input != 'm' && input != 'f');

	for(int i=0; i < 5; i++) {
		if(data[i].sex == input) {
			printf("%s\n", data[i].name);
		}
	}
}
