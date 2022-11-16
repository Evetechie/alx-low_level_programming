#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Name of file
 * @text_content: the Null terminated string to add at the end of the file
 *
 * Return: 1 if file exists and -1 if the file does not exist
 * (or if you do not have the required permissions to write the file)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);

	return (-1);
}
/**
 * _strlen - the length of a string to return
 * @s: The string to count
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}
