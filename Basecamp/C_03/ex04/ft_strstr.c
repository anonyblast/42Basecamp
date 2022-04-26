/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:46:32 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/22 02:57:06 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	aux;

	count = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		aux = 0;
		while (str[count + aux] == to_find[aux])
		{
			if (to_find[aux + 1] == '\0')
				return (str + count);
			aux++;
		}
		count++;
	}
	return (0);
}
