/* #include <stdio.h>
#include <ctype.h>
#include <limits.h>
 */
int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
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
		if(ft_isdigit(i) != isdigit(i))
			printf("Wrong!:%d\n",i);
	}
}

 */