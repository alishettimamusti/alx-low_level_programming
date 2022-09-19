/**
 * _strlen - gets the length of a given string
 * @s: Inputed string
 *
 * Return: Length of the string S
 */
int _strlen(char *s)
{
	int i, string_length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		string_length++;
	}

	return (string_length);
}
