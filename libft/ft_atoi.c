/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:27:11 by dong-kim          #+#    #+#             */
/*   Updated: 2023/10/31 16:07:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = sign * (-1);
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = (10 * res) + (*nptr - '0');
		nptr++;
	}
	return ((sign) * res);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_atoi("\t\n\r\v\fd469 \n"));
//     printf("%d\n", ft_atoi("2147483647"));
//     printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
//     printf("%d\n", ft_atoi("\e475"));
//     printf("%d\n", ft_atoi("546:5"));
//     printf("%d\n", ft_atoi("546:5"));
// }
