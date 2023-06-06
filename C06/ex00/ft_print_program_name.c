/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:40:30 by jjaroens          #+#    #+#             */
/*   Updated: 2023/05/21 16:53:00 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char *str)
{
	while (*str)
	{
		write (1, str++, 1);
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		return (0);
	else
		put_char(argv[0]);
	return (0);
}
