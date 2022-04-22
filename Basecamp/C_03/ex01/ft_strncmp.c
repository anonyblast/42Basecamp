/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:04:55 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/22 02:58:40 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	if (n == 1)
		return ((unsigned char) s1[count] - (unsigned char) s2[count]);
	while ((s1[count] != '\0' && s2[count] != '\0')
		&& count < (n - 1) && (s1[count] == s2[count]))
		count++;
	return ((unsigned char) s1[count] - (unsigned char) s2[count]);
}
