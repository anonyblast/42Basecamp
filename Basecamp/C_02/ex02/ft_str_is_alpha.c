/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:33:54 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/20 03:36:44 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 97 || str[count] > 122)
			&& (str[count] < 65 || str[count] > 90))
			return (0);
		count++;
	}
	return (1);
}
