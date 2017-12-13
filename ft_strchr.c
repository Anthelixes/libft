//DA
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char ch;

	i = 0;
	ch = (char)c;
	while (str[i])
	{
		if (str[i] == ch)
			return ( &((char*)str)[i]);
		i++;
	}
	if (ch == '\0')
		return (char*) str + i;
	return (NULL);
}