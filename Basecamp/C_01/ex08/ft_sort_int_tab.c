/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:07:58 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/18 20:21:56 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count_aux;

	count = 0;
	while (count < size)
	{
		count_aux = 0;
		while (count_aux < size)
		{
			if (tab[count] <= tab[count_aux])
				ft_swap(&tab[count_aux], &tab[count]);
			count_aux++;
		}
		count++;
	}
}
