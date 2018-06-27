#include <stdio.h>
#include "macros.h"
#include <cstring>

#define SIZE 50

int main() {
	FILE *fileRead = NULL;
	FILE *fileWrite = NULL;
	char str1[50];
	int wordCount = 0;
	OpenFiles(fileRead, "r", fileWrite, "w");
	while (fgets(str1, SIZE, fileRead) != NULL) {
		for (int i = 0; i <= strlen(str1); i++) 
			if (str1[i] == ' ')
				wordCount++;
		if (wordCount == 3) {
			fputs(str1, fileWrite);
			wordCount = 0;
		}
	}

	fclose(fileRead);
	fclose(fileWrite);
	system("pause");
	return 0;
}