#include "main.h"

/**
  * _isalpha - checkes if the argument is character
  * @c: the number to be checked
  *
  * Return: 1 if the argument is character 0 if not
  */
	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
