#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int s;
	scanf("%d", &s);
	for (int i = 0; i < s; i++) {
		for (int j = i; j<s-1; j++) {
			printf(" ");
		}
		for (int j = 0; j<=i*2; j++) {
			printf("*");

		}
		printf("\n");

	}
}
