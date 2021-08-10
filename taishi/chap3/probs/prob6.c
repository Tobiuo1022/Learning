#include <stdio.h>
#include <string.h>

int leap(int year);
int total_days(int year, int month, int day);

extern int DAYS_EVERY_MONTHS[12];
extern char DAYS[7][4];

int main(void) {
	int year, month;
	int past_days = 0;

	// input year and month.
	printf("年を入力してください.\n");
	scanf("%d", &year);
	printf("月を入力してください.\n");
	scanf("%d", &month);

	past_days = total_days(year, month, 1);
	int offset = past_days % 7;

	// print days.
	for(int i=0; i < 7; i++) {
		printf("%s\t", DAYS[i]);
	}
	printf("\n");

	// adjust 1st.
	for(int i=0; i < offset; i++) {
		printf("\t");
	}
	int j = offset;

	// print date.
	for(int i=1; i <= DAYS_EVERY_MONTHS[month-1] ; i++) {
		printf("%d\t", i);
		if(j == 6) {
			printf("\n");
			j = 0;
		} else{
			j++;
		}
	}
	printf("\n");
}
