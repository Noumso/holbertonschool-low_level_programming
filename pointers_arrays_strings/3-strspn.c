/**
 * _strspn ¬ gets the length of a prefix substring
 * @s: string where substring look
 * @accept: substing of accepted chars
 *
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept -1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
