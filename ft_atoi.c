//DA
#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	number;
	size_t	sign;

	number = 0;
	sign = 1;
	while (*str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		number = number * 10 + sign * (*str - '0');
		str++;
	}
	return (number);
}