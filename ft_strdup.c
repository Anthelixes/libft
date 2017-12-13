//DA
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	str = (char*)malloc(len * sizeof(char) + 1);
	if (str != NULL)
	{
		ft_strcpy(str,s);
		return (str);
	}
	else
		return (0);
}
