#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = (void*)malloc(size);

	if (str != NULL)
		ft_bzero(str, size);
	return (str);
}