
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
	size_t length = 0;
	char* str =getLine(f,&length);
	printf("%s o rozmiarze %zu", str,length);
	fclose(f);
	getchar();
}