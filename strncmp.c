
//#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	unsigned long i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] == s2[i])
			{
				return (0);
			}
			else
			{
				return (s1[i] - s2[i]);
			}
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char str[] = "ABC";
	printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
	printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
	printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
	printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
	printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
	printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
	printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
	return 0;
}