#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 == len2)
	{
		while (i < len1 && s1[i] && s2[i])
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}