/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <hsetyamu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:06:51 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/08 18:07:01 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void) {
    
	ft_putchar_fd('H', 0); // STDIN
	ft_putchar_fd('H', 1); // STDOUT
	ft_putchar_fd('H', 2); // STDERR

	return 0;
}
*/
