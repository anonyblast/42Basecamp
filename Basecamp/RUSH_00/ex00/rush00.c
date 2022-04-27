/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:53:02 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/11 17:54:02 by gusluiz-         ###   ########.fr       */
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
			if ((height == 1 && width == 1) || (width == 1 && height == y))
				ft_putchar('o');
			else if ((height == 1 && width == x) || (width == x && height == y))
				ft_putchar('o');
			else if ((width > 1 && width < x) && (height == 1 || height == y))
				ft_putchar('-');
			else if ((height > 1 && height < y) && (width == 1 || width == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
