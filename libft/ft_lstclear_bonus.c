/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong-kim <dong-kim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:18:51 by dong-kim          #+#    #+#             */
/*   Updated: 2023/03/21 20:00:58 by dong-kim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(ptr);
	}
}
