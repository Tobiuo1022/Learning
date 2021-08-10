#include <stdio.h>

int main(void) {
	int data[5][5] = {
		{17, 24, 1, 8, 15}, 
		{23, 5, 7, 14, 16}, 
		{4, 6, 13, 20, 22}, 
		{10, 12, 19, 21, 3}, 
		{11, 18, 25, 2, 9}
	};
	int rsum[5] = {0, 0, 0, 0, 0};
	int csum[5] = {0, 0, 0, 0, 0};
	int dsum[2] = {0, 0};

	// print table.
	for(int row=0; row<5; row++) {
		for(int column=0; column<5; column++) {
			int num = data[row][column];
			printf("%d\t", num);
		}
		printf("\n");
	}
	
	// culculate.
	for(int row=0; row<5; row++) {
		for(int column=0; column<5; column++) {
			int num = data[row][column];
			rsum[row] += num;
			csum[column] += num;
			if(row == column) {
				dsum[0] += num;
			}
			if(row + column == 4) {
				dsum[1] += num;
			}
		}
	}

	// print sum.
	printf("\n");
	printf("合計\n");
	for(int row=0; row<5; row++) {
		printf("%d\t", rsum[row]);
	}
	printf("\n");

	for(int column=0; column<5; column++) {
		printf("%d\t", csum[column]);
	}
	printf("\n");

	for(int diag=0; diag<2; diag++) {
		printf("%d\t", dsum[diag]);
	}
	printf("\n");
}
