// lab112.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"
#include <cstring>

void fileRead(FILE*);
void fileWrite(FILE*);

FILE *fp;
int main()
{
	fileWrite(fp);
	fileRead(fp);

	return 0;
}
void fileWrite(FILE *fp) {
	int i, let;
	char name[10];
	fp = fopen("f1.txt", "w");
	printf("Write Name !\n");
	for (i = 1; i <= 5; i++) {
		scanf_s("%s", name, 10);
		let = strlen(name);
		fprintf_s(fp, "Name %d %s Letters %d", i, name, let);
	}
	fclose(fp);
}

void fileRead(FILE *fp) {
	int i, let, count = 0;
	char name[10];
	char garbage1[50], garbage2[50];
	fp = fopen("f1.txt", "r");

	while (fscanf(fp, "%s%d%s%s%d", garbage1, &i, name, garbage2, &let) != -1) {
		if (let >= 4)
			count++;
	}
	printf_s(">= 4 word names = %d \n", count);
	fclose(fp);
}

