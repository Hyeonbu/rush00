void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	height;

	height = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (++height <= y)
	{
		width = 0;
		if (height == 1 || height == y)
			while (++width <= x)
				if ((width == 1 && height == 1) || (width == x && height == y))
					ft_putchar('A');
		else if ((width == x && height == 1) || (width == 1 && height == y))
			ft_putchar('C');
		else
			ft_putchar('B');
		else
			while (++width <= x)
				if (width == 1 || width == x)
					ft_putchar('B');
		else
			ft_putchar(' ');
		ft_putchar('\n');
	}
}
