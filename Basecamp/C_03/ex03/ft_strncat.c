/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:11:45 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/04/22 02:59:25 by gusluiz-         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	len;

	count = 0;
	len = ft_strlen(dest);
	while (src[count] != '\0' && count < nb)
		dest[len++] = src[count++];
	dest[len] = '\0';
	return (dest);
}
