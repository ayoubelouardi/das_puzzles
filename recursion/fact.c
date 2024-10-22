#include <stdio.h>
/***************************************************************************
*                                                                          *
* -------------------------------- fact.c -------------------------------- *
*                                                                          *
****************************************************************************/

int fact(int n)
{
	if (n < 0)
		return 1;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return n * fact(n - 1);
}


int main(void)
{
	int n = 10;

	printf("this is the factorial of %d: %d\n", n, fact(n));

	return 0;
}
