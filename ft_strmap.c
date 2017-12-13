#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*sir;
	size_t	i;

	i = 0;
	if (s)
	{
		sir = (char*)malloc(ft_strlen(s)+1);
		if (!sir)
			return (NULL);
		while (s[i] != '\0')
		{
			sir[i] = (*f)(s[i]);
			i++;
		}
		sir[i] = '\0';
		return (sir);
	}
	return (NULL);
}