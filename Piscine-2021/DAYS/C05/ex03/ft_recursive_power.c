/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:34:56 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2021/11/28 12:57:49 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
