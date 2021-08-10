#include <stdlib.h>
#include <string.h>

int DAYS_EVERY_MONTHS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char DAYS[7][4] = {
	"mon", 
	"tue", 
	"wed", 
	"thu", 
	"fri", 
	"sat", 
	"sun", 
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
