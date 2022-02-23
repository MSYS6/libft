/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:17:16 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/30 23:28:19 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include <stdio.h>
#include <string.h> */
void	*ft_memchr(const void *buf, int ch, unsigned long n)
{
	unsigned int	i;
	unsigned char	*buf1;
	unsigned char	tmp;

	buf1 = (unsigned char *)buf;
	tmp = (char)ch;
	i = 0;
	while (i < n)
	{
		if (*buf1 == tmp)
			return (buf1);
		i++;
	}
	return (0);
}

/* int main(void)
{
	char str[] = "abcdef\0ghij";
	char *p;

	p = memchr(str, 'h', 12);
	printf("検索文字は文字列の%ld番目\n", p - str);

	return 0;
}
 */