/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:19:08 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2021/12/06 22:20:17 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
#define FT_BTREE_H

#include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	int		item;
}			t_btree;

t_btree	*btree_create_node(void *item);

#endif
