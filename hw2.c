#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main()
{
	double km;
	double mi;
	printf("km 입력:");
	scanf("%lf", &km);
	mi = km / 1.609;
	printf("\n%.1f km is equal to %.1f miles", km, mi);
	return 0;
}