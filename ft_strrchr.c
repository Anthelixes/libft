/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:36:02 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 13:52:56 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p;
	char	*q;

	p = (char*)str;
	q = NULL;
	while (*p)
	{
		if (*p == c)
			q = p;
		p++;
	}
	if (c == '\0')
		return (p);
	return (q);
}
