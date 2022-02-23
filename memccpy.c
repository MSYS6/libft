/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:01:43 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/25 23:55:42 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	unsigned char	i;

	tmp1 = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	i = (unsigned char)c;
	while (n > 0)
	{
		if(*tmp1 == i)
			break;
		*tmp1++ = *tmp2++;
		n--;
	}
	if(n == 0)
		return (NULL);
	return (tmp1);
}

/* int main(void)
{
	char str1[128] = {1, 1, 1, 1, 1, 1, 1};
	char str2[] = "ab\0cde"; 
//途中に空文字のある文字列
	int i;

	printf("コピー前　中身の確認\n");
	for (i = 0; i < 7; i++)
		printf("%#x ", str1[i]);
	printf("\n");

	ft_memccpy(str1, str2,'d',5);

	printf("コピー後　中身の確認\n");
	for (i = 0; i < 7; i++)
		printf("%#x ", str1[i]);
	printf("\n");

	return 0;
}  */