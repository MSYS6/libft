/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:42:46 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/29 20:47:50 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h>
#include <limits.h>
 */
int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* int main(void)
{
	for (int i = 0; i < 127; ++i)
	{
		if(ft_isalnum(i) != isalnum(i))
			printf("Wrong!:%d\n",i);
	}
}
 */