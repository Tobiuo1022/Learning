#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int DAYS_EVERY_MONTHS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char DAYS[7][10] = {
	"monday", 
	"tuesday", 
	"wednesday", 
	"thursday", 
	"friday", 
	"saturday", 
	"sunday", 
	};

int leap(int year) {
	if(year % 400 == 0)
		return 1;
	if(year % 100 == 0)
		return 0;
	if(year % 4 == 0)
		return 1;
	return 0;
}

void split(char str[], char delimiter, char factor[3][5]) {
	char *p = str;
	int i=0, j=0;
	while(*p != '\0') {
		if(*p == delimiter) {
			factor[i][j] = '\0';
			j = 0;
			i++;
		} else {
			factor[i][j] = *p;
			j++;
		}
		p++;
	}
}

int total_days(int year, int month, int day) {
	int total = 0;

	total += (year - 1900) * 365;

	for(int i=1; i < month; i++) {
		total += DAYS_EVERY_MONTHS[i-1];
	}

	total += day;

	// consider Uruu.
	for(int i=1900; i < year; i++) {
		total += leap(i);
	}

	total -= 1;

	return total;
}

int main(void) {
	char date[3][5];
	int year, month, day;
	int past_days;

	// input date.
	char input[16];
	printf("日付を入力してください. (例: 1900.1.1)\n");
	gets(input);

	// date separate into year, month, day.
	split(input, '.', date);
	year = atoi(date[0]);
	month = atoi(date[1]);
	day = atoi(date[2]);
	
	// caluclate past days from 1900.1.1.
	past_days = total_days(year, month, day);
	
	char today[10];
	strcpy(today, DAYS[past_days % 7]);
	printf("%s\n", today);
}
