/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:43:56 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2021/10/13 18:25:17 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

int	main(int ac, char **av)
{
	int		i;

	if (ac == 1)
		ft_handle_stdin();
	i = 1;
	while (i < ac)
	{
		ft_handle_file(av[i]);
		if (i++ != ac - 1)
			ft_putchar('\n');
	}
	return (0);
}
