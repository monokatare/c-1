#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main(void) {
	int len = 0, tem=0;
	char str[100];
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		tem = 'a' - 'A';
		if (str[i] >= 'A' && str[i] <= 'z') {
			if (str[i] > 'Z') {
				str[i] = str[i] - tem;
			}
			else {
				str[i] = str[i] + tem;
			}
		}
	}
	printf("%s", str);
}