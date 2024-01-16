/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong-kim <dong-kim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:43:53 by dong-kim          #+#    #+#             */
/*   Updated: 2023/03/21 20:01:20 by dong-kim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}

// #include <stdio.h>
// #include "ft_lstnew.c"
// #include "ft_lstadd_front.c"
// void ft_display_lst(t_list *head)
// {
// 	while (head)
// 	{
// 		printf("[%p]\t", head);
// 		printf("[%s]\n", head->content);
// 		head = head->next;
// 	}
// }
// int main()
// {
// 	t_list *head = ft_lstnew("world");
// 	t_list *node1 = ft_lstnew("hello");

// 	puts("");
// 	ft_lstadd_front(&head, node1);
// 	ft_display_lst(head);
// 	printf("\nft_lstsize(t_list *head) = [%d]\n", ft_lstsize(head));
// 	puts("");
// 	return (0);
// }