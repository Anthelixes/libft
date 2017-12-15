/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 15:00:46 by deremia           #+#    #+#             */
/*   Updated: 2017/12/13 15:00:48 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*start;

	if (!s1 || !s2)
		return (NULL);
	p = ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1);
	if (!p)
		return (NULL);
	start = p;
	ft_strcat(p, s1);
	ft_strcat(p, s2);
	return (start);
}
