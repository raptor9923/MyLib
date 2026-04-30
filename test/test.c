
#include <stdio.h>

#include "MyLib.h"

int main(void)
{
	FILE *f = fopen("test.txt", "r");
	if (!f)
	{
		perror("fopen");
		return 1;
	}
	removeTooManySpaces(f,stdout);
	fclose(f);
	getchar();
}