#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

int countRows(FILE* stream);
int countWhiteSpaces(FILE* stream);
void removeTooManySpaces(FILE* inStream,FILE* outStream);
int countWords(FILE* stream);
int countSymbols(int c, FILE* stream);
char* getLine(FILE* stream, size_t* lenPtr);

#endif // MY_LIB