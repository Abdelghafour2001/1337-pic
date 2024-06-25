#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		cmp(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (-1);
	else if (nb1 == nb2)
		return (0);
	else
		return (1);
}

int	main()
{
	int		tab[] = {0, 1, 2, 3};

	printf("%d\n", ft_is_sort(tab, 4, cmp));
	return (0);
}

