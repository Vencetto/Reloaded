/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 13:38:47 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/01 18:48:12 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *dest;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int*)malloc(sizeof(*dest) * (max - min));
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
