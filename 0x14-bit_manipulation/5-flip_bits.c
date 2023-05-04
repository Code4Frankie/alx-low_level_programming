#include "main.h"
/**
 * flip_bits -this has to flip to get from one num to another.
 * @n: the first num
 * @m: the second num
 * Return: the num of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			j++;
		result <<= 1;
	}

	return (j);
}
