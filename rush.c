#include <unistd.h>

void	ft_putchar(char c);
int	rush(int width, int height);

int	main(void)
{
	rush(5, 5);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	rush(int width, int height)
{
	int x;
	int y;

	if (width <= 0 || height <= 0)
	{
		ft_putchar('\n');
		return (0);
	}
	y = 1;
	while (y <= height)
	{
		x = 1;
		if (y == 1 || y == height)
		{
			while (x <= width)
				if (x == 1 || x == width)
				{
					ft_putchar('o');
					x++;
				}
				else
				{
					ft_putchar('-');
					x++;
				}
		}
		else
		{
			while (x <= width)
			{
				if ( x == 1 || x == width)
				{
					ft_putchar('|');
					x++;
				}
				else
				{
					ft_putchar(' ');
					x++;
				}
			}
		}
		ft_putchar('\n');
		y++;
	}
	return (0);
}
