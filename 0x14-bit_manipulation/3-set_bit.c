#include "holberton.h"
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @n: Pointer to number given.
 * @index: Is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;

	x <<= index;/*2^index*/
	if (index > 64)
		return (-1);
	*n = *n | x; /*n + 2^index */
	return (1);
}

