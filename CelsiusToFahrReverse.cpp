
#include "stdafx.h"
#include "stdlib.h"

// Program to print celsius and fahr. Exercise 1-5
int main()
{
	for(int celsius = 300; celsius >= 0 ; celsius = celsius - 20)
	{
		printf("%d\t%d\n", celsius, 5 * (celsius - 32) / 9);
		
	}
	system("pause");
    return 0;
}

