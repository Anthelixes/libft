#include "libf.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-', fd);
	}
	if (n < 10)
	{
		ft_putchar(n + '0', fd);
		return ;
	}
	ft_putnbr(n / 10, fd);
	ft_putchar((n % 10) + '0', fd);
	return ;
}