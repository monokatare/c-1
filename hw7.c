#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 10,11,12,13,14,15 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int mid = 0;
	for (int i = 0; i < 6; i++) {
		mid = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = mid;

	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);

	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);

	}
}