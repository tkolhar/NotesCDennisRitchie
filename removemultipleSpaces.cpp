// removemultipleSpaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define CHARACTER '=>'

int main(void)
{
	int c, previouschar;

	previouschar = CHARACTER;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (previouschar != ' ')
				putchar(c);
		}
		else
			putchar(c);

		previouschar = c;
	}
	return 0;
}



