/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:35:40 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/21 20:26:57 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len;

	count = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[count] != '\0' && count < size)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (len);
}
