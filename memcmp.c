/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 00:23:02 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/31 00:23:51 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *buf1, const void *buf2, unsigned long n)
{
	unsigned int	i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)buf1;
	tmp2 = (unsigned char *)buf2;
	i = 0;
	while (i++ < n)
	{
		if (*tmp1 != *tmp2)
		{
			return (*tmp1 - *tmp2);
		}
		tmp1++;
		tmp2++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char buf1[] = "\0abc\0de"; 
    char buf2[] = "\0abc\0de";
    char buf3[] = "\0abcdef";

    if (ft_memcmp(buf1, buf2, 7) == 0)
        printf("buf1 = buf2\n");
    else
        printf("buf1 != buf2\n");

    if (ft_memcmp(buf1, buf3, 7) == 0)
        printf("buf1 = buf3\n");
    else
        printf("buf1 != buf3\n");

    return 0;
} */