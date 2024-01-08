/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsetyamu <hsetyamu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:27:28 by hsetyamu          #+#    #+#             */
/*   Updated: 2023/12/13 14:43:56 by hsetyamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) + 1;
	while (len >= 0)
	{
		if (c == *(s + len))
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s = "Test sentence";

	printf("strchr: %p\n", strrchr(s, 'n'));
	printf("ft_strchr: %p\n", ft_strrchr(s, 'n'));

	printf("strchr: %p\n", strrchr(s, 'b'));
        printf("ft_strchr: %p\n", ft_strrchr(s, 'b'));	
	
	printf("strchr: %p\n", strrchr(s, '\0'));
        printf("ft_strchr: %p\n", ft_strrchr(s, '\0'));

}
*/
