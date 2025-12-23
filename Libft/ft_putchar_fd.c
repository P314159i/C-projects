/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:42:28 by pidi              #+#    #+#             */
/*   Updated: 2025/11/18 17:21:17 by pidi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
//
// int	main()
// {
// 	// char buffer [3];
// 	ft_putchar_fd('A', 1);
// 	ft_putchar_fd('\n', 2);
// 	// printf("%zd\n", read(0, buffer, 2));
// 	return (0);
// }