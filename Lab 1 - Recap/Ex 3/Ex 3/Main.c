#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char sentence[100];
	char words[20][20];

	scanf("%[^\n]s", sentence);
	
	char* p;
	p = strtok(sentence, " ");
	int lung = 0;

	while (p != NULL)
	{
		strcpy(words[lung++], p);
		p = strtok(NULL, " ");
	}
	char aux[20];
	for (int i = 0; i < lung - 1; i++) {
		for (int j = i+1; j < lung; j++) {
			if (strlen(words[i])< strlen(words[j])) {
				strcpy(aux,words[i]);
				strcpy(words[i],words[j]);
				strcpy(words[j], aux);
			}
			else if (strlen(words[i]) == strlen(words[j])) {
				if (strcmp(words[i], words[j]) > 0) {
					strcpy(aux, words[i]);
					strcpy(words[i], words[j]);
					strcpy(words[j], aux);
				}
			}
		}
	}

	for (int i = 0; i < lung; i++) {
		printf("%s\n", words[i]);
	}

	return 0;
}