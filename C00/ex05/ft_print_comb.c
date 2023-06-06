/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:05:41 by jjaroens          #+#    #+#             */
/*   Updated: 2023/05/07 12:06:49 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(char arr[])
{
	if (arr[0] == '7' && arr[1] == '8' && arr[2] == '9')
	{
		write (1, arr, 3);
		write (1, "\n", 2);
	}
	else
	{
		write (1, arr, 4);
		write (1, " ", 1);
	}	
}

void	ft_print_comb(void)
{
	char	digit[4];

	digit[0] = '0';
	digit[3] = ',';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{	
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				print_digit (digit);
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
