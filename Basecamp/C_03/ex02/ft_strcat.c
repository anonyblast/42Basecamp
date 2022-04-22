/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:28:08 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/22 02:54:11 by gusluiz-         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	len;

	count = 0;
	len = ft_strlen(dest);
	while (src[count] != '\0')
		dest[len++] = src[count++];
	dest[len + count] = '\0';
	return (dest);
}
