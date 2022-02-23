/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:54:59 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/30 03:14:37 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *buf, int ch, unsigned long n)
{
	unsigned char	*tmp;
	unsigned char	c;

	tmp = (unsigned char *)buf;
	c = (unsigned char)ch;
	while (n > 0)
	{
		*tmp++ = c;
		n--;
	}
	return (buf);
}


int main(void)
{
	char str1[] = "0123456789MBA";
	char *str2 = str1;

	ft_memset(str1 + 3, '*', 4);
	memset(str2 + 3, '*', 4);

	printf("%s\n", str1);
	printf("%s\n", str2);

	return 0;
}
