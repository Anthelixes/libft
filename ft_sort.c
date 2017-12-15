/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:07:57 by deremia           #+#    #+#             */
/*   Updated: 2017/12/15 13:07:59 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort(int *vec, size_t size)
{
	unsigned int		i;
	unsigned int		j;
	int					aux;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (vec[i] > vec[j])
			{
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
			j++;
		}
		i++;
	}
}
