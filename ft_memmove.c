#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i<n)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	((char*)dest)[i] = '\0';
	return (dest);
}

/*
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	const char	*s2;
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	if (src == NULL || dest == NULL)
		return (NULL);
	if (len1 > len2)
	{
		while (i<n)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
	}
	else if (len1 < len2)
		ft_memcpy(dest, src, n);
	return (dest);
}
*/
