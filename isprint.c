/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:02:07 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/29 21:02:24 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h>
#include <limits.h>
 */
int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
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
	for (int i = 0; i < 200; ++i)
	{
		if(ft_isprint(i) != isprint(i))
			printf("Wrong!:%d\n",i);
	}
}
 */