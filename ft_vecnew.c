/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:58:17 by deremia           #+#    #+#             */
/*   Updated: 2017/12/15 13:58:19 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_vecnew(size_t n)
{
	int				*vec;
	unsigned int	i;

	vec = (int*)malloc(n);
	i = 0;
	if (!vec)
		return (NULL);
	while (i < n)
	{
		vec[i] = 0;
		i++;
	}
	return (vec);
}
