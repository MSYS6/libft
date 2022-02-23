/* #include <ctype.h>
#include <stdio.h> */

int ft_tolower(int c)
{
	if (65 <= c && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
	{
		return (c);
	}
}

/* int main(void)
{
	for (int i = -50; i < 200; ++i)
	{
		if(ft_tolower(i) != tolower(i))
			printf("Wrong!:%d\n",i);
	}
}

 */