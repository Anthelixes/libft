//DA
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char* p;
	char* q;

	p = (char*) str;
	q = NULL;
	while (*p)
	{
		if (*p == c)
			q = p;
		p++;
	}

	if (c == '\0')
		return p;

	return q;
}