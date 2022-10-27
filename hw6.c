#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
	int a[5];
	int num1 = 0, num2 = 0;
	printf("Please input five integers:");
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("Odd numbers:");
	for (int i = 0; i < 5; i++) {
		if (a[i] % 2 != 0) {
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	printf("Even numbers:");
	for (int i = 0; i < 5; i++) {
		if (a[i] % 2 == 0) {
			printf("%d ", a[i]);
		}
	}





}