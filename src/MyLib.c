#include "MyLib.h"
#define IN_WORD 1
#define	NOT_IN_WORD 0

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

int countWords(FILE* stream)
{
	int c;
	int state=NOT_IN_WORD;
	int count=0;
	while((c=fgetc(stream)) != EOF)
	{
		if (c<=12&&c>=9 || c==' ')
		{
			if (state==IN_WORD)
			{
				count++;
				state=NOT_IN_WORD;
			}
		}
		else
		{
			state=IN_WORD;
		}
	}
	if (state==IN_WORD)
		count++;
	return count;
}

int countSymbols(int c, FILE* stream)
{
	int count=0;
	int cc;
	while((cc=fgetc(stream)) != EOF)
	{
		if (cc==c)
			count++;
	}
	return count;
}