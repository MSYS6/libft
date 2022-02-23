char	*ft_strnstr(const char *str,const char *to_find, unsigned long len)
{
	unsigned int	i;
	unsigned int	memory;

	if (to_find[0] == '\0')
		return (*str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{
			memory = i;
			while (to_find++ != '\0')
			{
				if(str[i++] != *to_find && str[i] == '\0')
					return (&str[memory]);
			}
		}
		i++;
	}
	return (0);
}

#include<stdio.h>
int main(void)
{
	char s1[] = "abcdefghijklmn";
	char s2[] = "defgh";
	char s3[] = "xyz";
	char s4[] = "abcdefghijklmnopqr";
	char s5[] = "";
	char *sp;

	sp = ft_strnstr(s1, s2, 10);
	printf("一致する場合 : %s\n", sp);
	sp = ft_strnstr(s1, s3, 3);
	printf("一致しない場合 : %s\n", sp);
	sp = ft_strnstr(s1, s4, 3);
	printf("検索対象文字列より長い場合 : %s\n", sp);
	sp = ft_strnstr(s1, s5, 3);
	printf("\\0 : %s\n", sp);

	return 0;
}