// replace tabs with \t. This will make the tabs visible in unambigious way.
// Similar code can be written for backspace and backslash


#include "stdafx.h"
#define CHARACTER '*'

int main(void)
{
	int c, previouschar;

	previouschar = CHARACTER;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		putchar(c);

		previouschar = c;
	}
	return 0;
}





