
#include <stdio.h> 
#include<stdlib.h>	


int main() {
	char x;
	scanf_s("%c", &x);
	x = x + 32;
	printf("%c", x);
	return 0;
}