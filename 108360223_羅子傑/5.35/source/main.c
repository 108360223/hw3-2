#include <stdio.h>
#include <stdlib.h>

unsigned long long int a, b, n;

int main(void) {

	a = 0;
	b = 1;

	printf("0\n");
	printf("1\n");

	for (int i = 0; i < 92; i++) {

		n = a + b;
		a = b;
		b = n;

		printf("%llu\n", n);
	}

	system("pause");
	return 0;
}