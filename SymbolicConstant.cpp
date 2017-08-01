

#include "stdafx.h"
#include "stdlib.h"

#define CELSIUS_LOWER 0
#define CELSIUS_UPPER 300
#define INCREMENT 20

// Program to print celsius and fahr. Exercise 1-5
int main()
{
	for(int celsius = CELSIUS_UPPER; celsius >=  CELSIUS_LOWER ; celsius = celsius - 20)
	{
		printf("%d\t%d\n", celsius, 5 * (celsius - 32) / 9);
		
	}
	system("pause");
    return 0;
}

