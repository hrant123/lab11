// lab113.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include <cstring>
#define SIZE 50

int main()
{
	FILE *fpRead = fopen("f1.txt", "r");
	FILE *fpWrite = fopen("f2.txt", "w");
	char str1[SIZE];
	int i = 0;

	while (fgets(str1, SIZE, fpRead) != NULL) {
		char *str = str1;
		while (*str++ != ' ');
		str--;
		while (*str++ = *(str+1));
		while (*str-- != ' ');
		str++;
		while (*str++ = *(str+1));
		fputs(str1, fpWrite);
	}


	fclose(fpRead);
	fclose(fpWrite);

	return 0;
}

