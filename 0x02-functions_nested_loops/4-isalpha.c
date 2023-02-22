#include "main.h"

/**
 * _islapha - checks for alphabetic character
 * @c: is the character to be checked
 * Return: 1 if c is a leetter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
