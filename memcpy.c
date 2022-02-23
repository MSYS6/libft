/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:28:22 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/29 22:01:57 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memcpy(void *buf1, const void *buf2, unsigned long n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)buf1;
	tmp2 = (unsigned char *)buf2;
	while (n > 0)
	{
		*tmp1++ = *tmp2++;
		n--;
	}
	return (tmp1);
}
/* 
int main(void)
{
	char str1[128] = {1, 1, 1, 1, 1, 1, 1};
	char str2[] = "ab\0cde"; 
//途中に空文字のある文字列
	int i;

	printf("コピー前　中身の確認\n");
	for (i = 0; i < 7; i++)
		printf("%#x ", str1[i]);
	printf("\n");

	ft_memcpy(str1, str2, 5);

	printf("コピー後　中身の確認\n");
	for (i = 0; i < 7; i++)
		printf("%#x ", str1[i]);
	printf("\n");

	return 0;
} 
 */