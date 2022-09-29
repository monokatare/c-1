#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int num, count = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			count += 1;
		}
		if (count > 2) {
			break;
		}

	}
	if (count == 2) {
		printf("It is a prime number");
	}
	else {
		printf("it is not a prime number");
	}



}