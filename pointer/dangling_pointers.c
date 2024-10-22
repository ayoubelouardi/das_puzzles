#include <stdlib.h>

/**
 * this funtion has a problem
 * because of that the pointer point to a local variable
 * that lives on the stack, when the vairable pop out from
 * the stack, the pointer will pointe to an invalide address
 *
 * we call them dangling pointers.
 */

int f(int **ptr)
{
	int n = 110;

	*ptr = &n;

	return 0;
}

/**
 * tha't the correct way to do it dynamically
 * because we need to allocate memory in the heap
 * so when the g function returns, we still have a valid
 * adress
 */

int g(int **iptr)
{
	if ((*iptr = (int *) malloc(sizeof(int))) == NULL)
		return -1;
	return 0;
}

int main(void)
{
	return 0;
}
