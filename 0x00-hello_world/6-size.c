#include <stdio.h>
/**
 * main - This program uses the printf function to print the size of various types
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of char is %lu bytes\n", sizeof(char));
	printf("Size of int is %lu byte(s)\n", sizeof(int));
	printf("Size of long int is %lu byte(s)\n", sizeof(long int));
	printf("Size of float is %lu byte(s)\n", sizeof(float));
	printf("Size of long long int is %lu byte(s)\n", sizeof(long long int));
	return (0);
}
