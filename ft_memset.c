/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:32:30 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/07 19:06:09 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}

/*
returns an integer less than, equal to, or greater  than  
zero  if  the first n bytes of s1 is found, 
respectively, to be less than, to match, or be greater than the
first n bytes of s2
*/

/*
#include <stdio.h> //puts, printf
#include <string.h> //memset

int	main (void) {
	char str[] = "This is a ft_memset test.";
	printf("Test sentence: %s\n", str);

	memset(str,'$',9);
	printf("memset: %s\n", str);

	ft_memset(str,'<',6);
	printf("ft_memset: %s\n", str);

	return(0);
}
*/
