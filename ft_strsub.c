/*
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	dest = (char*)malloc((ft_strlen(str) + 1)*len);
	while (s && start < len)
	{
		dest[i] = s[start++];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/