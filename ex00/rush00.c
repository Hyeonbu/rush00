void ft_putchar(char c);

int 	rush(int x, int y)
{
	int width;
	int height;

	if (x <= 0 || y <= 0)
		return (0);
	height = 1;
	while (height <= y)
	{
		width = 1;
		if (height == 1 || height == y)
			while (width <= x)
			{
				if (width == 1 || width == x)
					ft_putchar('o');
				else
					ft_putchar('-');
				width++;
			}
		else
		{
			while (width <= x)
			{
				if ( width == 1 || width == x)
					ft_putchar('|');
				else
					ft_putchar(' ');
				width++;
			}
		}
		ft_putchar('\n');
		height++;
	}
	return (0);
}
