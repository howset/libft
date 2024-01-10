/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <hsetyamu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:06:24 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/08 18:06:33 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
#include <stdio.h>

void 	CharInd(unsigned int index, char *c) {
    printf("Index: %u, Character: %c\n", index, *c);
}

int	main(void)
{
	
	//ft_striteri("successiveapplicationsoff", CharInd);
	//ft_striteri("", CharInd);
	//ft_striteri("4bcd0 ", CharInd);
	
	return 0;
}
*/
