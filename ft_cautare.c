/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cautare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:49:17 by deremia           #+#    #+#             */
/*   Updated: 2017/12/15 13:49:19 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_cautare(int *vect, size_t size, int val)
{
	size_t		i;

	i = 0;
	while (i < size)
	{
		if (vect[i] == val)
			return (vect + i);
		i++;
	}
	return (NULL);
}
