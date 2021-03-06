/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:37:07 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 15:01:58 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*ret;
	char	*aux;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || len > (ft_strlen(s) - start))
		return (NULL);
	p = ft_strnew((size_t)len);
	if (!p)
		return (NULL);
	ret = p;
	aux = (char*)s;
	aux = aux + start;
	while (*aux && len)
	{
		*p = *aux;
		len--;
		p++;
		aux++;
	}
	*p = '\0';
	return (ret);
}
