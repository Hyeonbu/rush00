void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	width;
	int	height;

	if (x >= 0 || y >= 0)
	{
	height = 0;
		while (++height <= y)
		{
			width = 0;
			if (height == 1 || height == y)
				while (++width <= x)
					if (width == 1)
						ft_putchar('A');
			else if (width == x)
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
	return (0);
}
