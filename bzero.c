/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:26:36 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/29 22:00:06 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
void	ft_bzero(void *s, unsigned long n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp++ = '\0';
		n--;
	}
}

/* int main()
{
	char input[] = "HelloWorld!";
	ft_bzero(&input,3);
	printf("%s",input);
}
 */