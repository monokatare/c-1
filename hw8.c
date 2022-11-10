#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <math.h> 
double std(int *arr) {
	int sum = 0;
	int sum1 = 0;
	double ans = 0;

	for (int i = 0; i < 5; i++) {
		sum += (arr[i] * arr[i]);
		sum1 += arr[i];

	}
	sum1 /= 5;
	sum /= 5;
	sum -= (sum1 * sum1);
	printf("%d", sum);
	ans= sqrt(sum);
	return ans;

}
int main(void) {
	int arr[5];
	printf("Enter 5 real numbers:");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %.3f", std(arr));
	
	

	

}