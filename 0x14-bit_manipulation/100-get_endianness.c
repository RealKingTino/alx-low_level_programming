#include "main.h"

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;
	if (*c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
