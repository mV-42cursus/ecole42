/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong-kim <dong-kim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:08:26 by dong-kim          #+#    #+#             */
/*   Updated: 2023/03/23 01:55:20 by dong-kim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	ptr = new;
	ptr->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *head;
// 	t_list *new;

// 	head = (t_list *)malloc(sizeof(t_list) * 1);
// 	new = (t_list *)malloc(sizeof(t_list) * 1);
// 	head->content = (void *)"Wolrd";
// 	head->next = NULL;
// 	new->content = (void *)"Hello";
// 	new->next = NULL;
// 	ft_lstadd_front(&head, new);
// 	while (head)
// 	{
// 		printf("[%p]\t->\t", head->next);
// 		printf("[%s]\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	return (0);
// }