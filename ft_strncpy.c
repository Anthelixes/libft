/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:34:52 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 13:45:28 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *p;
	char *q;

	p = dest;
	q = (char*)src;
	while (*q && n)
	{
		*p = *q;
		n--;
		p++;
		q++;
	}
	while (n)
	{
		*p = '\0';
		n--;
		p++;
	}
	return (dest);
}
