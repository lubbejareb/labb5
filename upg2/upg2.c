#include "lib.h"

void main(void)
{
	char *locale;
	locale = setlocale(LC_ALL, "");


	char myStr[10];
	printf("\n%s\n", myStr);		//massa III:n

	int myStr_len = strlen(myStr);
	printf("\n%d\n", myStr_len);	//262

	myStr[5] = '\0';
	myStr_len = strlen(myStr);
	printf("\n%d\n", myStr_len);	//5


	myStr[4] = "hej";
	printf("\n%s\t myStr[4]=hej\n", myStr); //nej det funkar inte


	char *word;

	/*	printf("\n%s\n", word); //uninitialized local variable 'word' used	*/

	word = "he\0llo";
	printf("\n%s\n", word); //ja detta fungerade


	system("pause");
}