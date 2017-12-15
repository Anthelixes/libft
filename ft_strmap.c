/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 12:33:20 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 13:38:35 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*sir;
	size_t	i;

	i = 0;
	if (s)
	{
		sir = (char*)malloc(ft_strlen(s) + 1);
		if (!sir)
			return (NULL);
		while (s[i] != '\0')
		{
			sir[i] = (*f)(s[i]);
			i++;
		}
		sir[i] = '\0';
		return (sir);
	}
	return (NULL);
}
