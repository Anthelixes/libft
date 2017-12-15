/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:27:07 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 13:59:39 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = NULL;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
		{
			str = &((unsigned char*)s)[i];
			return (str);
		}
		i++;
	}
	return (str);
}
