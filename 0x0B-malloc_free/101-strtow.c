#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * len - returns length of string
 * @str: string to be counted
 *
 * Return: length of string
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
/**
 * num_words - counts the number of words in str
 * @str: stringto be used
 *
 * Return: number of words
 */
int num_words(char *str)
{
	int i = 0, words = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}
