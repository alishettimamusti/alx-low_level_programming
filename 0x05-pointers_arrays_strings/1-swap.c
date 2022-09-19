/**
 * swap_int - swaps two integer values
 * @a: First number
 * @b: Second number
 *
 * Return: No return value
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
