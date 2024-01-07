/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:04:29 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/07 18:59:55 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = dest;
	psrc = (unsigned char *) src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n > 0)
		{
			pdest[n] = psrc[n];
			n--;
		}
	}
	return (dest);
}

/*
returns an integer less than, equal to, or greater  than  zero  if  the
first n bytes of s1 is found, respectively, to be less than, to match,
or be greater than the first n bytes of s2
*/

/*
#include <stdio.h> //puts, printf
#include <string.h> //memmove

int	main(void)
{
	char str1[] = "memmove_1";
	char str2[] = "memmove_2";

	printf("\nstr1 before memmove: ", str1);

	// Copies contents of str2 to str1
	memmove(str1, str2, sizeof(str2));
	
	printf("\nstr1 after memmove: ", str1);

	char str3[] = "ft_memmove_1";
	char str4[] = "ft_memmove_2";

	printf("\nstr3 before ft_memmove: ", str3);

	// Copies contents of str2 to str1
	ft_memmove(str3, str4, sizeof(str4));
	
	printf("\nstr3 after ft_memmove: ", str3);
	
	return (0);
}
*/
