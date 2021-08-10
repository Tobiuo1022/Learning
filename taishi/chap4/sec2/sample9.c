#include <stdio.h>
#include <stdlib.h>

int line_count(char filename[32]) {
	FILE *file;
	int line = 0;
	char buf[256];

	if((file = fopen(filename, "r")) == NULL) {
		printf("%sを開けません.\n" , filename);
		exit(1);
	}

	while(fgets(buf, 256, file) != NULL) {
		line++;
	}

	fclose(file);

	return line;
}

void look(char file[32]) {
	FILE *fp;
	char name[32];
	int eng, math;

	if((fp = fopen(file, "r")) == NULL) {
		printf("%s を開けません.\n", file);
		exit(1);
	}

	printf("現在のデータを出力します.\n");
	printf("　　名前　英語　数学\n");

	int n=0;
	while(fscanf(fp, "%s %d %d", name, &eng, &math) != EOF) {
		printf("%3d %10s %5d %5d\n", n, name, eng, math);
		n++;
	}

	fclose(fp);
}

int select(int min, int max) {
	int num;
	while(1) {
		scanf("%d", &num);
		if(num < min || max < num) {
			printf("%d~%dの中からお選びください.\n", min, max);
			continue;
		} else {
			break;
		}
	}

	return num;
}

int menu() {
	printf("\n*****処理選択メニュー*****\n");
	printf("1: データの変更\n");
	printf("2: データの追加\n");
	printf("3: 終了\n");
	printf("***************\n");
	printf("処理番号を選択してください.\n");

	return select(1,3);
}

void renew(char filename[32], int n) {
	FILE *old, *new;
	char name[32];
	char newname[32];
	int eng, math;
	int neweng, newmath;

	if((old = fopen(filename, "r")) == NULL) {
		printf("%sを開けません.\n" , filename);
		exit(1);
	}
	
	if((new = fopen("new.txt", "w")) == NULL) {
		printf("%sを開けません.\n" , filename);
		exit(1);
	}

	int i=0;
	while(fscanf(old, "%s %d %d", name, &eng, &math) != EOF) {
		if(n != i) {
			fprintf(new, "%s %d %d\n", name, eng, math);
		} else {
			printf("名前　　英語　数学\n");
			printf("%10s %5d %5d\n", name, eng, math);
			printf("新しいデータを入力してください.\n");
			printf("名前　　英語　数学\n");
			scanf("%s %d %d", newname, &neweng, &newmath);
			fprintf(new, "%s %d %d\n", newname, neweng, newmath);
		}
		i++;
	}

	fclose(old);
	fclose(new);
}

int renew_menu(char filename[32]) {
	int line = line_count(filename);
	printf("何番のデータを変更しますか?\n");

	return select(0, line-1); 
}
	
void add(char filename[32]) {
	FILE *file;
	char name[32];
	int eng, math;

	if((file = fopen(filename, "a")) == NULL) {
		printf("%sを開けません.\n" , filename);
		exit(1);
	}

	printf("追加するデータを入力してください.\n");
	printf("名前　　英語　数学\n");
	scanf("%s %d %d", name, &eng, &math);
	fprintf(file, "%s %d %d\n", name, eng, math);

	fclose(file);
}

int main(void) {
	char filename[32] = "test.txt";

	look(filename);

	int num = menu();
	switch(num) {
		case 1:renew(filename, renew_menu(filename)); break;
		case 2:add(filename); break;
	}

	return 0;
}
