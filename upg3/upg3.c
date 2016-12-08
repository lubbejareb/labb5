#include "libary.h"
#pragma warning (disable : 4996)

void main(void)
{
	char *locale;
	locale = setlocale(LC_ALL, "");
	FILE *ReadFile = fopen("palindrom.txt", "r");
	int antalRader = 0, nr = 0, ch = 0, k = 0, palindrome = 0;
	int len;
		while (!feof(ReadFile))
		{
			ch = fgetc(ReadFile);
			if (ch == '\n')
			{
				antalRader++;
			}
		}
	fclose(ReadFile);
	FILE *ReadFile_again = fopen("palindrom.txt", "r");
	for (int i = 0; i < antalRader; i++)
	{
		string c = ReadLine(ReadFile_again,1);
		len = strlen(c);
		printf("%d\t", len);
		k = (len)-1;

		for (int i = 0; c[i]; i++) {
			c[i] = tolower(c[i]);
		}

		for (int j = 0; j < len; j++)
		{
			if (c[j] == c[k])
			{
				palindrome++;
			}
			k--;
		}
		if(palindrome==(len))
		{
			printf("%s\t\t", c);
			printf("\tdet är ett palindrome\n");
			palindrome = 0;
		}
		else
		{
			printf("%s\t\t", c);
			printf("det är INTE ett palindrome\n");
			palindrome = 0;
		}
	}
	fclose(ReadFile_again);
//läsa från fil klar
	printf("skriv ditt egna värde och kolla om det är en palindrom\n");
	string input = (char*)malloc(100);;
	fgets(input,100,stdin);
	palindrome_check(input);


	system("pause");
}

string ReadLine(FILE *infile, int input)
{
	string line, nline;
	int n, ch, size;

	n = 0;
	size = bufferSize;
	line = GetBlock(size + 1);
	while ((ch = getc(infile)) != '\n' && ch != EOF)
	{
		if (n == size) 
		{
			size *= 2;
			nline = (string)GetBlock(size + 1);
			strncpy(nline, line, n);
			FreeBlock(line);
			line = nline;
		}
		if (ch != ' ' && input==1)
		{
			line[n++] = ch;
		}
		else if(input == 0)
		{
			line[n++] = ch;
		}
	}
	if (n == 0 && ch == EOF) {
		FreeBlock(line);
		return (NULL);
	}
	line[n] = '\0';
	nline = (string)GetBlock(n + 1);
	strcpy(nline, line);
	FreeBlock(line);
	return (nline);
}

void *GetBlock(size_t nbytes)
{
	void *result;

	result = malloc(nbytes);
	if (result == NULL) printf("No memory available");
	return (result);
}

void FreeBlock(void *ptr)
{
	free(ptr);
}