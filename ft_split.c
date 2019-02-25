#include <stdio.h>

int count_world(char *s)
{
	int c;

	c = 0;
	if (s && *s != ' ')
		c++;
	while (*s)
		if (*s++ == ' ' && *s && *s !=' ' )
			c++;
	return (c);
}

int count_char(char *c)
{
	int g;

	g = 0;
	while (*c && *c != ' ')
	{	
		g++;
		c++;
	}
	return (g);
}

char *ft_make(char *c)
{
	int bb = 0;
	int t = count_char(c);
	char *h = (char *)malloc(sizeof(h) * (t + 1));
	while (*c && *c != ' ')
	{
		h[bb]  = *c;
		bb++;
		c++;
	}	
	h[bb] = '\0';
	return (h);
}

char **ft_splite(char *c)
{
	int i;
	int b = count_world(c);
	char **t = (char **)malloc(sizeof(t) * (b + 1));

	i = 0;
	if (c == NULL || b == 0)
		t = NULL;
	while (i < b)
	{
		while (*c && *c == ' ')
			c++;
		t[i] = ft_make(c);
		while (*c && *c != ' ')
			c++;
		i++;
	}
	t[i] = NULL;
	return (t);
}

int main(int ac, char **av)
{
	char *k;
	av++;
	char **v = ft_splite(*av);
	while (*v)
	{
		k = *v;
		printf("%s\n",k);
		v++;
	}	
	return (0);
}
