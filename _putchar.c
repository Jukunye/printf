#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - length of string
 * @str: character pointer
 *
 * Return: length of the string
 */

int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * print - Writes an array of characters to stdout.
 * @string: Pointer to the string to be printed.
 *
 * Return: The number of bytes written.
 */
int print(char *string)
{
	return (write(1, string, _strlen(string)));
}
