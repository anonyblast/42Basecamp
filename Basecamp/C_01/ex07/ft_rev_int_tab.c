/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:45:43 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/20 18:43:25 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	position;

	count = 0;
	position = size - 1;
	while (position >= size / 2)
	{
		temp = tab[count];
		tab[count] = tab[position];
		tab[position] = temp;
		count++;
		position--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int *pointer = a;

	ft_rev_int_tab(pointer, 10);

	int count = 0;
	while (count < 10)
	{
		printf("num : %i \n", a[count]);
		count++;
	}
	return (0);
}