#include <stdlib.h>

int ft_lest(int a)
{
	int i;

	i = 1 + (a < 0);
	while (a /= 10)
		i++;
	return (i);
}

int  abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a + '0');
}

void ft_make(int a, char *b, int c)
{
	while (c)
	{
		b[c - 1] = abs(a % 10);
		a = a / 10;
		c--;
	}
//	printf("%s\n",b);
}

char *ft_itoa(int a)
{
	int y;
	y = 0;
	char *b;
	int c;
	c = ft_lest(a);
	if(!(b = (char *)malloc(sizeof(b) * c + 1)))
		return (NULL);
	if (a < 0 && c--)
		b[y++] = '-';
	ft_make(a, &b[y], c);
	 printf("%s\n",b);
	return (b);
}

int main()
{
	ft_itoa(-8888);
	ft_itoa(8888);
}
