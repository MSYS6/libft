/* #include <string.h>
#include <stdio.h> */

char *ft_strchr(const char *s, int c)
{
	int n;
	char tmp;
	char *output;
	output = (char * )s;

	tmp = c + '0';
	n = 0;
	while(*output++ == '\0')
	{
		if(*output == tmp)
		{
			return (output);
		}
	}
	return (0);
	
}

/* int main(void)
{
	char str[] = "abcdefghijklmnabcdefghijklmn", *p;
	int c;

	printf("検索文字を入力してください。");
	c = 'f';
	
	p = ft_strchr(str, c);
	if (p != NULL) {
		printf("%cは文字列の%ld番目にあります。\n", c, p-str);
		printf("以降の文字列は%sです。\n", p);
	}
	else
		printf("%cは見つかりませんでした\n", c);
		
	return 0;
} */