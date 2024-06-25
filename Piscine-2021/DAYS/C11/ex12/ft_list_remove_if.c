/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Abdelghafour2001 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:57:10 by Abdelghafour2001          #+#    #+#             */
/*   Updated: 2021/12/07 00:57:12 by Abdelghafour2001         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*head;
	t_list	*prev;
	t_list	*tmp;

	head = *begin_list;
	while (head)
	{
		if (cmp(head->data, data_ref) == 0)	
		{
			if (head == *begin_list)
				*begin_list = head->next;
			else
				prev->next = head->next;
			tmp = head;
			head = head->next;
			free(tmp);
		}
		else
		{
			prev = head;
			head = head->next;
		}
	}
}
