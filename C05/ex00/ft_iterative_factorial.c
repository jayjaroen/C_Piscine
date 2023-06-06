/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:30:27 by jjaroens          #+#    #+#             */
/*   Updated: 2023/05/25 16:36:18 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		output = output * nb;
		nb--;
	}
	return (output);
}
