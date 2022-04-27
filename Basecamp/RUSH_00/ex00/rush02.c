/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:53:02 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/11 00:40:14 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	height;

	height = 1;
	while (height <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((height == 1 && width == 1) || (width == x && height == 1))
				ft_putchar(65);
			else if ((height == y && width == 1) || (width == x && height == y))
				ft_putchar(67);
			else if ((width > 1 && width < x) && (height == 1 || height == y))
				ft_putchar(66);
			else if ((height > 1 && height < y) && (width == 1 || width == x))
				ft_putchar(66);
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
