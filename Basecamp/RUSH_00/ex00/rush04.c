/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:53:02 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/11 00:30:58 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	validate_field(int width, int height, int x, int y);

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
			if ((height > 1 && height < y) && (width > 1 && width < x))
				ft_putchar(' ');
			else if ((height > 1 && height < y) && (width == 1 || width == x))
				ft_putchar(66);
			else if ((width > 1 && width < x) && (height == 1 || height == y))
				ft_putchar(66);
			else
				validate_field(width, height, x, y);
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}

void	validate_field(int width, int height, int x, int y)
{
	if (height == 1 && width == 1)
		ft_putchar(65);
	else if (height == 1 && width == x)
		ft_putchar(67);
	else if (width == 1 && height == y)
		ft_putchar(67);
	else
		ft_putchar(65);
}
