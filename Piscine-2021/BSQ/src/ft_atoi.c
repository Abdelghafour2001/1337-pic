/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:40:15 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2021/10/13 17:40:18 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str, int i)
{
	int	res;
	int	j;

	j = 0;
	res = 0;
	while (num(str[j]) && str[j] && j <= i)
	{
		res *= 10;
		res += (int)str[j] - 48;
		j++;
	}
	return (res);
}
