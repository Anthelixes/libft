/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:49:26 by deremia           #+#    #+#             */
/*   Updated: 2017/12/15 13:49:27 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	char		*s;
	char		aux;
	size_t		i;
	size_t		len;

	if (!str)
		return ;
	i = 0;
	len = ft_strlen(str);
	len--;
	s = str;
	while (i < len)
	{
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;
		i++;
		len--;
	}
}
