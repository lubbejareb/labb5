#include "lib.h"

void main(void)
{
	char *locale;
	locale = setlocale(LC_ALL, "");

	char input;
	unsigned char input_U;
	printf("skriv ett tecken och låt datorn tolka\n");
	input = getche();
	fPrintOutput(analyse(input));
	printf("testa som unsigned char\n");
	input_U = getche();
	fPrintOutput(analyse(input_U));
	printf("\n");
	system("pause");
}