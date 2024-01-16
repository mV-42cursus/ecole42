/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong-kim <dong-kim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:38:22 by dong-kim          #+#    #+#             */
/*   Updated: 2023/03/19 14:09:26 by dong-kim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// int main()
// {
//     int i = 96;
//     while (++i <= 122)
//         ft_putchar_fd(i, 0);
//     i = 96;
// 	write(1, "\n", 1);
//     while (++i <= 122)
//         ft_putchar_fd(i, 1);
//     i = 96;
// 	write(1, "\n", 1);
//     while (++i <= 122)
//         ft_putchar_fd(i, 2);
// }
/*  < STUDY MATERIAL >
	https://en.wikipedia.org/wiki/File_descriptor
	https://velog.io/@jakeseo_me/%EC%9C%A0%EB%8B%89
	%EC%8A%A4%EC%9D%98-stdin-stdout-stderr-%EA%B7%B8
	%EB%A6%AC%EA%B3%A0-pipes%EC%97%90-%EB%8C%80%ED
	%95%B4-%EC%95%8C%EC%95%84%EB%B3%B4%EC%9E%90
	0	Standard input	STDIN_FILENO	stdin
	1	Standard output	STDOUT_FILENO	stdout
	2	Standard error	STDERR_FILENO	stderr
*/