// Print one word per line
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int c, countlines = 0, countwords = 0, countcharacters = 0;
	while ((c = getchar()) != EOF)
	{

		if (c == '\t' || c == '\n' || c == ' ')
		{
			putchar('\n');
		}
		else
			putchar(c);
	}
	system("pause");
	return 0;
}


