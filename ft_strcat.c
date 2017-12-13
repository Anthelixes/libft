// DA
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	size_t	lenf;

	i = 0;
	len1 = ft_strlen(src);
	lenf = ft_strlen(dest) + len1;
	len2 = ft_strlen(dest);
	while (len2 < lenf)
	{
		dest[len2] = ((char*)src)[i];
		len2++;
		i++;
	}
	dest[len2] = '\0';
	return (dest);
}