/*
 *	Source code written by Gabriel Correia
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main (int argc, char **argv)
{
	int x = 10;
	/*	
	 *	3 < sqrt (10) < 3.20
	 *	sqrt (10) = x*x
	 *	x^2 = 10
	*/
	double value = 2;
	for (int i = 0; i < 10; i++)
		value -= (value * value - x) / (value * 2);
	
	printf ("SQRT (%d) = ~= %lf\n", x, value);
	return 0;
	
}
