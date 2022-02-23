#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *buf1, const void *buf2, unsigned long n)
{

}

int main(void)
{
	char str[] = "abcdefghijklmnopqrstu";

	printf("移動前：%s\n", str);

	memmove(str, str + 4, 10);

	printf("移動後：%s\n", str);

	return 0;
}