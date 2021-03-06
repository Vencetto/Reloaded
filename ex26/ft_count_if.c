/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:42:42 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/03 19:43:00 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;

	i = 0;
	while (*tab != 0)
	{
		if (f(*(tab++)))
			i = i + 1;
	}
	return (i);
}
