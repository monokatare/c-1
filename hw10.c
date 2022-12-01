#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
struct city
{
	char name[20];
	char country[20];
	char population[20];
};
int main(void) {
	struct city arr[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name>");
		scanf("%s", &arr[i].name);
		printf("Country");
		scanf("%s", &arr[i].country);
		printf("Population ");
		scanf("%s", &arr[i].population);

	}
	printf("Printing the three cities:");
	for (int i = 0; i < 3; i++) {
		printf("1. %s in %s with a population of %s",arr[i].name, arr[i].country, arr[i].population);
	}




}