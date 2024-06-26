/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 07:51:48 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2021/12/06 22:29:43 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		in_to_out();
	else
	{
		while (i < ac)
		{
			if (ft_strcmp(av[i], "-") == 0)
				in_to_out();
			else
				ft_cat(av[i]);
			i++;
		}
	}
	return (0);

