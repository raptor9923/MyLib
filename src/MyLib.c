#include "MyLib.h"

int countRows(FILE* stream)
{
	int count=0;
	int c;
	while ((c=fgetc(stream)) != EOF)
	{
		if (c=='\n')
			count++;
	}
	return  count;
}

int countWhiteSpaces(FILE* stream)
{
	int count=0;
	int c;
	while((c=fgetc(stream)) != EOF)
	{
		if (c<=12&&c>=9 || c==' ')
		{
			count++;
		}
	}
	return count;
}
void removeTooManySpaces(FILE* inStream,FILE* outStream)
{
	int c;
	int last;
	c=last=fgetc(inStream);
	fputc(last,outStream);
	while ((c=fgetc(inStream)) != EOF)
	{
		if (c!=' ')
		{
			fputc(c,outStream);
			last=c;
		}
		else
		{
			if (last!=' ')
			{
				fputc(c,outStream);
				last=c;
			}
		}
	}
}

