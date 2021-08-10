#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp1;
	char name[20];
	int eng, math;
	
	if((fp1 = fopen("test.txt", "w")) == NULL) {
		printf("ファイルを開けません\n");
		exit(1);
	}

	printf("データを入力してください.\n終了はCTRL+D\n");
	printf("名前　　英語　数学\n");
	int i=0;
	while(scanf("%s %d %d", name, &eng, &math) != EOF) {
		fseek(fp1, i * 30L, SEEK_SET);
		fprintf(fp1, "%20s%5d%5d", name, eng, math);
		i++;
	}
	fclose(fp1);
	return 0;
}
