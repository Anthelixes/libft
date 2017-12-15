/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:34:41 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 13:43:40 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	if (!n)
		return (0);
	p = (unsigned char*)s1;
	q = (unsigned char*)s2;
	while (*q && *p && *p == *q && --n)
	{
		p++;
		q++;
		n--;
	}
	return (*p - *q);
}
