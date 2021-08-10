int kazu(int, int, int *);

void kinshu(int num, int d[]) {
	int a;

	num = kazu(10000, num, &a);
	d[0] = a;
	num = kazu( 5000, num, &a);
	d[1] = a;
	num = kazu( 2000, num, &a);
	d[2] = a;
	num = kazu( 1000, num, &a);
	d[3] = a;
	num = kazu(  500, num, &a);
	d[4] = a;
	num = kazu(  100, num, &a);
	d[5] = a;
	num = kazu(   50, num, &a);
	d[6] = a;
	num = kazu(   10, num, &a);
	d[7] = a;
	num = kazu(    5, num, &a);
	d[8] = a;
	d[9] = num;
}

int kazu(int k, int nn, int *s) {
	*s = nn / k;
	nn = nn - (*s) * k;
	return nn;
}
