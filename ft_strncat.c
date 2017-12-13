//DA
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len2;
	size_t	lenf;
	
	i = 0;
	lenf = ft_strlen(dest) + n;
	len2 = ft_strlen(dest);
	while (len2 < lenf && ((char*)src)[i])
	{
		dest[len2] = ((char*)src)[i];
		len2++;
		i++;
	}
	dest[len2] = '\0';
	return (dest);
}