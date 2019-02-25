typedef union u_ui
{
	unsigned int b : 8;
}  				t_ui;

typedef struct s_no
{
	unsigned int b : 8;
}			t_no;

unsigned char reverse_byte(unsigned char c)
{
	int i;
	int y;
	t_no dd;
	int u;
	t_ui r;

	dd.b = 0;
	i = 1;
	y = 0;
	u = 128;
	r.b = c;
	while (y < 9)
	{
		if (r.b & i)
			dd.b = dd.b | u;
		u /= 2; 
		i *= 2;
		y++;		
	}
	return (dd.b);
}
