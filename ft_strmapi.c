/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:33:32 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 13:39:32 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sir;
	unsigned int	i;

	i = 0;
	if (s)
	{
		sir = (char*)malloc(ft_strlen(s) + 1);
		if (!sir)
			return (NULL);
		while (s[i])
		{
			sir[i] = (*f)(i, s[i]);
			i++;
		}
		sir[i] = '\0';
		return (sir);
	}
	return (NULL);
}
