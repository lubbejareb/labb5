#pragma once
#ifndef _libary_h
#define _libary_h

#define  bufferSize 120

#include "Struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>

//prototype
void *GetBlock(size_t);
string ReadLine(FILE *,int);
void FreeBlock(void *);

Bool palindrome_check(string);

//defines
#define TRUE	1
#define FALSE	0
#endif // !lib_h
