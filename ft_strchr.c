/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:30:50 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 13:22:00 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (str[i])
	{
		if (str[i] == ch)
			return (&((char*)str)[i]);
		i++;
	}
	if (ch == '\0')
		return (char*)str + i;
	return (NULL);
}
