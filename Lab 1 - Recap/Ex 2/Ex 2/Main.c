#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long charToInt(char n[]) {

	long number = 0;
	int i;

	for (i = 0; i < strlen(n) - 1; i++) {
		number = number * 10 + (n[i] - '0');
	}
	return number;
}

int main() {
	FILE* in;
	long sum = 0;
	char number[10];

	if ((in = fopen("in.txt", "r")) == NULL)
	{
		printf("Error!");
		exit(1);
	}

	while (fgets(number, sizeof(number), in) != NULL) {
		sum += charToInt(number);
	}

	printf("\nthe final sum is: %d", sum);

	fclose(in);

	return 0;
}