#include "lib.h"


CharAnalys analyse(char CharInput)
{
	CharAnalys ret;
	ret.isAlpha = isalpha(CharInput);
	ret.isDigit = isdigit(CharInput);
	ret.islower = islower(CharInput);
	ret.isUpper = isupper(CharInput);
	ret.isNum	= isalnum(CharInput);
	ret.ispunct = ispunct(CharInput);
	ret.isSpace = isspace(CharInput);
	return ret;
}