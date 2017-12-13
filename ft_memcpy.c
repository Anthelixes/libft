//DA (?)
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char* p;
	char* q;

	p = dest;
	q = (char*) src;
	while (n--)
	{
		*p++ = *q++;
	}
	return (dest);
}