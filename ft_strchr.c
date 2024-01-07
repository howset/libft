/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetya <hsetya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:12:04 by hsetyamu          #+#    #+#             */
/*   Updated: 2024/01/07 16:25:01 by hsetya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return ((char *) s);
	else
		return (NULL);
}

/*
returns  a pointer to the first occurrence of the character c in the
string s
*/

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s = "Test sentence";

	printf("strchr: %p\n", strchr(s, 't'));
	printf("ft_strchr: %p\n", ft_strchr(s, 't'));

	printf("strchr: %p\n", strchr(s, 'b'));
        printf("ft_strchr: %p\n", ft_strchr(s, 'b'));	
	
	printf("strchr: %p\n", strchr(s, '\0'));
        printf("ft_strchr: %p\n", ft_strchr(s, '\0'));

}
*/
