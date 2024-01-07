/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:44:32 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/07 19:03:00 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	total;

	total = nmemb * size;
	if ((nmemb == 0) || (size == 0) || total > SIZE_MAX)
		return (NULL);
	res = malloc(sizeof(size_t) * total);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, total);
	return (res);
}

/*
The calloc() function allocates memory for an array of nmemb 
elements of size bytes each  and returns  a  pointer to the 
allocated memory.  The memory is set to zero.  If nmemb or size is
0, then calloc() returns a unique pointer value that can  later 
be  successfully  passed  to free().
If  the  multiplication of nmemb and size would result in integer 
overflow, then calloc() returns an error.
*/

/*
#include <stdio.h>
int main() 
{
	int *ex;
	int size = 5; //0 to fail

	ex = (int *)ft_calloc(6,(size * sizeof(int))); //nmemb 0 to fail
	if (ex == NULL) printf("ft_calloc failed.\n");
	else printf("ft_calloc success.\n");

	//free
	free(ex);
	return 0;
}
*/
