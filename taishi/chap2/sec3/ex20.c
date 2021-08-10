#include <stdio.h>

int main(void) {
	char str1[256], str2[256];
	int i=0;

	printf("please input via keyboard.\n");
	gets(str1);
	while(str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	printf("str2 = %s\n", str2);
}
