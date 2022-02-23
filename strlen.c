/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:16:57 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/29 21:16:59 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>
#include<string.h>
unsigned long	ft_strlen(const char *str);
 */
unsigned long	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int main(){
	char *str;
	str ="";
	printf("自分:%lu,本家:%lu",ft_strlen(str),strlen(str));
} */