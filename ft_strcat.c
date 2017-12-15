/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:30:32 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 12:30:33 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	size_t	lenf;

	i = 0;
	len1 = ft_strlen(src);
	lenf = ft_strlen(dest) + len1;
	len2 = ft_strlen(dest);
	while (len2 < lenf)
	{
		dest[len2] = ((char*)src)[i];
		len2++;
		i++;
	}
	dest[len2] = '\0';
	return (dest);
}
