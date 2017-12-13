/*#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (s1 && s2)
		return (NULL);
	dest = (char*)malloc(sizeof(dest) + (len1 + len2 + 1));
	if (s1)
		ft_strcpy(dest, len1);
	if (s2)
		ft_strcpy(dest, len2);
	dest[len1+len2] = '\0';
	return (dest);
}*/