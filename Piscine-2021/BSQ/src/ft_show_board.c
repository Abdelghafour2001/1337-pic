/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:43:11 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2021/10/13 17:43:12 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

void	ft_show_board(void)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= g_board.y)
	{
		j = 0;
		while (j < g_board.x)
			ft_putchar(g_board.bd[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
