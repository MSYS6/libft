/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:48:20 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/29 22:48:22 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dest, char *src, unsigned long size)
{
	int	i;

	i = 0;
	if (size != 0)
	{
		while (size - 1 > 0 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
			size = size - 1;
		}
		dest[i] = '\0';
	}
	while (src[i++] != '\0')
	{
		size++;
	}
	return (size);
}
