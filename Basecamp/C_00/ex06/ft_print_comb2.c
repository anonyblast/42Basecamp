/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:38:30 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/11 23:38:31 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char c, char d)
{
	ft_putchar(48 + c / 10);
	ft_putchar(48 + c % 10);
	ft_putchar(' ');
	ft_putchar(48 + d / 10);
	ft_putchar(48 + d % 10);
	if (c <= 97 || d <= 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	while (c <= 98)
	{
		d = c + 1;
		while (d <= 99)
		{
			ft_write_comb(c, d);
			d++;
		}
		c++;
	}
}
