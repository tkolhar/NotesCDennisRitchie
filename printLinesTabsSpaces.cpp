// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

// Exercise 1-8 : print value of newlines, tabs and spaces. 
int main()
{
	
		long blanklines, tabs, nwlines, ip;

		blanklines = 0;
		tabs = 0;
		nwlines = 0;
		ip = 0;
		while ((ip = getchar()) != EOF)
		{
			if (ip == '\n')
			{
				++nwlines;
			}
			else if (ip == '\t')
			{
				++tabs;
			}
			else if (ip == ' ')
			{
				++blanklines;
			}
		}
		printf("Total Newlines: %ld\nTotal Tabs: %ld\nTotal blanks: %ld\n", nwlines, tabs, blanklines);
		system("pause");
    return 0;
}




