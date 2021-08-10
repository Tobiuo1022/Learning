#include <stdio.h>

int main(void) {
	float f = 0;
	double d = 0;

	for (int i=0; i<10000; i++) {
		f += 0.01;
		d += 0.01;
	}
	printf("%f, %f\n", f, d);
}
