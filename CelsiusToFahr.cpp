// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

// Program to print celsius and fahr.
int main()
{
	for(int celsius = 0; celsius <=300; celsius = celsius + 20)
	{
		printf("%d\t%d\n", celsius, 5 * (celsius - 32) / 9);
		
	}
	system("pause");
    return 0;
}

