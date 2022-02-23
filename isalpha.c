/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 20:33:17 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/29 20:33:57 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h>
#include <limits.h>
 */
int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
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
		if(ft_isalpha(i) != isalpha(i))
			printf("Wrong!:%d\n",i);
	}
}
 */

//Gdone