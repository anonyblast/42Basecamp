/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:13:38 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/20 17:36:42 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(int a[3]);

void	ft_print_comb(void)
{
	int	comb[3];

	comb[0] = 48;
	while (comb[0] <= 55)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= 56)
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= 57)
			{
				write_comb(comb);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}

void	write_comb(int comb[3])
{
	write(1, &comb[0], 1);
	write(1, &comb[1], 1);
	write(1, &comb[2], 1);
	if (comb[0] != 55)
		write(1, ", ", 2);
}
