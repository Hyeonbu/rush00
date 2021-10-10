void	ft_putchar(char c);
void	first_line(int x);
void	middle_line(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	first_line(x);
	middle_line(x, y);
	first_line(x);
}

void	first_line(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1 || width == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		width++;
	}
	ft_putchar('\n');
}

void	middle_line(int x, int y)
{
	int	width;
	int	height;

	height = 1;
	while (height <= y - 2)
	{
		width = 1;
		while (width <= x)
		{
			if (width == 1 || width == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
