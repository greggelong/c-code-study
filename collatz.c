/*
 * collat.c
 * 
 * Copyright 2020 gregk <gregk@gregk-Inspiron-15-3567>
 * 
 *  uses a command line argument to run collatz on that number
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("missing the command line argument number to collatz\n");
		
		return 1;  // ends the program with fail
	}
	
	
	int num = atoi(argv[1]);
	
	if (num <= 1)
	{
		printf("Please use a number greater than one\n");
		
		return 1; // ends the program with fail
	}
	
	int steps = 0;
	
	while (num > 1)
	{
		printf("%i\n",num);
		steps++;
		
		if (num % 2 == 0)
		{
			num = num / 2;
		}
		else
		{
			num = 3 * num + 1;
		}
		
		
	}
	printf("%i\n",num);
	printf("Got to 1 in %i steps\n",steps);
	return 0;
}

