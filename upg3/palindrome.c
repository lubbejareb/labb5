#include "libary.h"


Bool palindrome_check(string input)
{

	int j=0;
	int len = strlen(input)-1;
	char str[20] = { input };
	for (int i = 0; i < len; i++)
	{
		if (input[i] != ' ')
		{
			str[j] = input[i];
			j++;
		}

	}
	for (int i = 0; str[i]; i++) {
		str[i] = tolower(str[i]);
	}
	len = strlen(str)-1;


	int k = j-1, palindrome = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == str[k])
		{
			palindrome++;
		}
		k--;
	}


	if (palindrome == (len))
	{
		printf("%s\t\t", str);
		printf("\tdet är ett palindrome\n");
		return TRUE;
	}
	else
	{
		printf("%s\t\t", str);
		printf("det är INTE ett palindrome\n");
		return FALSE;
	}
}