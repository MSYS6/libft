/* #include <ctype.h>
#include <stdio.h> */

int ft_toupper(int c)
{
	if (97 <= c && c <= 122)
	{
		c = c - 32;
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
		if(ft_toupper(i) != toupper(i))
			printf("Wrong!:%d\n",i);
	}
}

 */