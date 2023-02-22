#include "main.h"

/**
 * _islapha - checks for alphabetic character
 * @c: is the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _islapha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
