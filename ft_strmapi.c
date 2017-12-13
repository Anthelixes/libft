#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sir;
	unsigned int	i;

	i = 0;
	if (s)
	{
		sir = (char*)malloc(ft_strlen(s)+1);
		if (!sir)
			return (NULL);
		while (s[i])
		{
			sir[i] = (*f)(i, s[i]);
			i++;
		}
		sir[i] = '\0';
		return (sir);
	}
	return (NULL);
}