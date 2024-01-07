/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:10:02 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/07 16:17:16 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

/*
scans the initial n bytes of the memory area pointed to by s for the
first instance of c
*/

/*
#include <stdio.h>
#include <string.h>

int main() 
{
	const char *S = "Test Sentence";
	
	printf("ft_memchr: %p\n", ft_memchr(S, 'n', sizeof(S)));
	printf("memchr: %p\n", memchr(S, 'n', sizeof(S)));
	
	printf("ft_memchr: %p\n", ft_memchr(S, 'X', sizeof(S)));
	printf("memchr: %p\n", memchr(S, 'X', sizeof(S)));
	
	printf("ft_memchr: %p\n", ft_memchr(S, 't', 5));
	printf("memchr: %p\n", memchr(S, 't', 5));

	return (0);
}
*/
