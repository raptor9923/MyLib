#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

int countRows(FILE* stream);
int countWhiteSpaces(FILE* stream);
void removeTooManySpaces(FILE* inStream,FILE* outStream);
#endif // MY_LIB