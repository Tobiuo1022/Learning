#include <stdio.h>

int main(void) {
	for (int i=0; i<10; i++) {
		for (int j=0; j<(9-i); j++) {
			putchar(' ');
		}
		for (int j=0; j<i; j++) {
			putchar('*');
		}
		putchar('*');
		for (int j=0; j<i; j++) {
			putchar('*');
		}	
		putchar('\n');
	}
}
