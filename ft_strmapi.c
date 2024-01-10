/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <hsetyamu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:05:02 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/08 18:05:11 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
#include <stdio.h>

char	CharInd(unsigned int index, char c) 
{
    printf("Index: %u, Character: %c\n", index, c);
    return (c);
}

int	main(void)
{
	char* res;
	
	res = ft_strmapi("successiveapplicationsoff", CharInd);
	//res = ft_strmapi("", CharInd);
	//res = ft_strmapi("4bcd0 ", CharInd);
	
	free(res);
	return 0;
}
*/
