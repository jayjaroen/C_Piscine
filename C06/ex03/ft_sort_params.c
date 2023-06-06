/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:22:48 by jjaroens          #+#    #+#             */
/*   Updated: 2023/05/25 14:57:00 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

void	ft_swap(char **c1, char **c2)
{
	char	*temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int	ft_strcmp(char *c1, char *c2)
{
	while (*c1 == *c2 && *c1)
	{
		c1++;
		c2++;
	}
	return (*c1 - *c2);
}

void	ft_sort_params(char **str, int argc)
{
	int	i;
	int	swap;

	swap = -1;
	while (swap != 0)
	{
		swap = 0;
		i = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp (str[i], str[i + 1]) > 0)
			{
				ft_swap (&str[i], &str[i + 1]);
				swap++;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argv + 1, argc - 1);
	while (*(++argv))
		print_char (*argv);
	return (0);
}
