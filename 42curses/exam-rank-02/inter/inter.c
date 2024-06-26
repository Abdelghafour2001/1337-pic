/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:18:30 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2022/02/09 13:18:36 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int exist[255] = {0};
        char *s1 = av[1];
        char *s2 = av[2];
        while (*s2)
            exist[(int)*s2++] = 1;
        while (*s1)
        {
            if (exist[(int)*s1])
            {
                write(1, s1, 1);
                exist[(int)*s1] = 0;
            }
            s1++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
