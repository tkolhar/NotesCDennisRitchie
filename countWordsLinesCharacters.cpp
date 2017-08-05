// Count lines words and characters
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int c, countlines=0, countwords=0, countcharacters=0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			countlines++;
		}
		if (c == '\t' || c == '\n' || c == ' ')
		{
			countwords++;
		}
		else
			countcharacters++;
	}
	printf("%d\t%d\t%d\n", countlines, countwords, (countcharacters+countwords));
	system("pause");
    return 0;
}

