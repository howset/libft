/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:40:54 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/07 19:05:55 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	while (n > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
		n--;
	}
	return (dest);
}

/*
returns an integer less than, equal to, or greater  than  zero  
if the first n bytes of s1 is found, respectively, 
to be less than, to match, or be greater than the first 
n bytes of s2
*/

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "memcpy_1";
	char str2[] = "memcpy_2";

	printf("\nstr1 before memcpy: %s", str1);
	
	// Copies contents of str2 to str1
	memcpy(str1, str2, sizeof(str2));

	printf("\nstr1 after memcpy: %s", str1);
	
	char str3[] = "ft_memcpy_1";
	char str4[] = "ft_memcpy_2";

	printf("\nstr1 before ft_memcpy: %s", str3);

	// Copies contents of str2 to str1
	ft_memcpy(str3, str4, sizeof(str4));

	printf("\nstr1 before ft_memcpy: %s", str3);

	return 0;
}
*/
