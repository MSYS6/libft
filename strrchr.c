/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:17:30 by mobushi           #+#    #+#             */
/*   Updated: 2022/01/30 20:18:19 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	tmp;
	char	*output;

	output = (char *)s;
	tmp = (char)c;
	n = 0;
	while (*output++ != '\0')
	{
		n++;
	}
	while (n-- > 0)
	{
		if (*output == tmp)
		{
			return (output);
		}
		output--;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	int c;

	printf("検索文字を入力してください。");
	c = 'c';
	
	p = ft_strrchr(str, c);
	if (p != NULL) {
		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
		
	return 0;
}
 */