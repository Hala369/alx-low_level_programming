#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int b;

	b = 0;
	while (s[b])
	{
		b++;
	}
	return (b);
}

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (src[b] && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	if (b < n)
	{
		while (dest[b])
		{
			dest[b] = '\0';
			b++;
		}
	}
	return (dest);
}

/**
 * isspace - checks if character is space
 * @c: the char
 * Return: the integer value of char
 */

int isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}

/**
 * count_words - counts words in a given string
 * @str: the string to count words from
 * Return: the number of words
 */

int count_words(char *str)
{
	int count = 0;
	int b = 0;

	while (str[b] != '\0')
	{
		if (str[b] != ' ')
		{
			count++;
			while (str[b] != ' ' && str[b] != '\0')
				b++;
		}
		else
			b++;
	}
	if (count == 0 && _strlen(str) == 1 && str[0] == ' ')
		count = 0;
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split
 * Return: the pointer to an array containing words.
 */

char **strtow(char *str)
{
	int num_words;
	int b = 0;
	int m = 0;
	int start;
	int end;
	int word_length;
	char *word;
	char **words;

	if (str == NULL || _strlen(str) == 0 || count_words(str) == 0)
		return (NULL);
	num_words = count_words(str);
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	while (str[b] != '\0' && m < num_words)
	{
		start = b;
		while (str[b] != ' ' && str[b] != '\0')
			b++;
		end = b;
		word_length = end - start;
		if (word_length > 0)
		{
			word = malloc(sizeof(char) * (word_length + 1));
			if (word == NULL)
				return (NULL);
			_strncpy(word, str + start, word_length);
			word[word_length] = '\0';
			words[m] = word;
			m++;
		}
		else
			b++;
	}
	words[m] = NULL;
	return (words);
}
