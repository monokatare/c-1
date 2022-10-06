#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
void binary(int num) {
	if (num == 0)
		return;
	int k = num % 2;
	binary(num / 2);
	printf("%d", k);
}

int main(void)
{
	int c;
	scanf("%d", &c);
	binary(c);
	return 0;
}
