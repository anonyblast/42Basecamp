/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:10:39 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/22 02:58:11 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' && s2[count] != '\0')
		&& (s1[count] == s2[count]))
		count++;
	return ((unsigned char) s1[count] - (unsigned char) s2[count]);
}
