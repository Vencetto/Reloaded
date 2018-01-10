/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 16:19:12 by vzomber           #+#    #+#             */
/*   Updated: 2017/10/30 21:32:48 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int ac, char **av)
{
	int i;
	int j;
	int min;

	i = 0;
	while (i < ac)
	{
		min = i;
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[min], av[j]) > 0)
				min = j;
			j++;
		}
		swap(&av[i], &av[min]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int j;

	ft_sort_params(ac, av);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
