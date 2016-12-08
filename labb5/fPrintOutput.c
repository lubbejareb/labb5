#include "lib.h"

void fPrintOutput(CharAnalys output)
{
	if (output.isNum != FALSE) //bokstav eller siffra
	{
		printf("\t Alfanumerisk");
		if (output.isAlpha != FALSE)
		{
			printf("\t Bokstav");
			if (output.islower != FALSE) printf("\t Gemen");
			else if (output.isUpper != FALSE) printf("\t Versal");

		}
		if (output.isDigit != FALSE) printf("\t Siffra");
	}
	else if (output.ispunct != FALSE) printf("\t Punktsymbol");
	else if (output.isSpace != FALSE) printf("\t Vitt tecken");

	else printf("odefinerat tecken");
	printf("\n");
	return;
}