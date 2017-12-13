//DA
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;

	len1 = ft_strlen(big);
	len2 = ft_strlen(little);
	if (little[0] == '\0' && big[0] == '\0')
		return (&((char*)big)[i]);
	while (i < len1)
	{
		if (ft_memcmp(&big[i],little,len2) == 0)
			return (&((char*)big)[i]);
		i++;
	}
	return (NULL);
}