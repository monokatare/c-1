#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main()
{
	int in_1, in_2;
	printf("input two int:");
	scanf("%d %d", &in_1, &in_2);
	printf("%d & %d= %d\n", in_1, in_2, in_1 & in_2);
	printf("%d | %d= %d\n", in_1, in_2, in_1 | in_2);
	printf("%d & %d= %d\n", in_1, in_2, in_1 ^ in_2);

}