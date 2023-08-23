#include "shell.h"
/**
 * interactive- Indicates a 'true' value if the shell is in interactive mode.
 * @info: address structure.
 * Return: Value of 1 in case of interactive mode; otherwise, the value is 0.
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * is_delim- Verifies whether the character functions as a delimiter.
 * @c: the character under examination.
 * @delim: the string used as a delimiter.
 * Return: 1 when accurate, 0 when incorrect.
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
/**
 * _isalpha- verifies the presence of alphabetical characters.
 * @c: The input character.
 * Return: Assign a value of 1 to 'c' if it is a letter.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 * _atoi- transforms a string into an integer value.
 * @s: the sequence intended for transformation.
 * Return: Value is 0 if there are no numerical figures within the string.
 */
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	return (output);
}
