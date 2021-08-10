#include <stdio.h>
#include <stdlib.h>

char filename[32] = "data.txt";
int data_size = 30L;
char name[32];
int eng, math;

int count_data(FILE *file) {
	if((file = fopen(filename, "r")) == NULL) {
		printf("%sが開けません.\n", filename);
		exit(1);
	}

	fseek(file, 0L, SEEK_END);
	int num = ftell(file) / data_size;

	fclose(file);
	return num;
}

int select(int min, int max) {
	int n;
	while(1) {
		scanf("%d", &n);
		if(min <= n && n <= max) {
			break;
		} else {
			printf("%dから%dの間で選んでください.\n", min, max);
		}
	}

	return n;
}

void show(FILE *file, int n) {
	if((file = fopen(filename, "r")) == NULL) {
		printf("%sが開けません.\n", filename);
		exit(1);
	}

	fseek(file, n*data_size, SEEK_SET);
	fscanf(file, "%20s%5d%5d", name, &eng, &math);
	printf("%d%20s%5d%5d\n", n, name, eng, math);

	fclose(file);
}

void showall(FILE *file) {
	printf("**********全データ**********\n");
	for(int i=0; i < count_data(file); i++) {
		show(file, i);
	}
}

void menu() {
	printf("*****処理選択メニュー*****\n");
	printf("1: データの変更\n");
	printf("2: データの追加\n");
	printf("3: データの削除\n");
	printf("4: 終了\n");
	printf("*************************\n");
	printf("処理番号を入力してください\n");
}

void add(FILE *file) {
	if((file = fopen(filename, "a")) == NULL) {
		printf("%sが開けません.\n", filename);
		exit(1);
	}

	int i=0;
	printf("データを入力してください.\n");
	printf("名前\t英語\t数学\n");
	while(scanf("%s %d %d", name, &eng, &math) != EOF) {
		fseek(file, i*data_size, SEEK_SET);
		fprintf(file, "%20s%5d%5d", name, eng, math);
		i++;
	}

	fclose(file);
}

void change(FILE *file) {
	if((file = fopen(filename, "r+")) == NULL) {
		printf("%sが開けません.\n", filename);
		exit(1);
	}
	
	printf("**********データの変更**********\n");
	printf("何番のファイルを変更しますか?\n");
	int i = select(0, count_data(file)-1);
	show(file, i);

	printf("新しいデータを入力してください.\n");
	scanf("%s %d %d", name, &eng, &math);
	fseek(file, i*data_size, SEEK_SET);
	fprintf(file, "%20s%5d%5d", name, eng, math);

	fclose(file);
}

int main(void) {
	FILE *file;
	showall(file);

	menu();
	switch(select(1, 4)) {
		case 1: change(file); break;
		case 2: add(file); break;
	}
	return 0;
}
