/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:36:57 by skock             #+#    #+#             */
/*   Updated: 2024/11/08 15:37:00 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

// int	main()
// {
// 	char str[10];
// 	size_t	i;

// 	memset(str, 'X', 9);
// 	i = 0;
// 	while (i < sizeof(str))
// 	{
// 			printf("%c ", str[i]);
// 			i++;
// 	}
// 	return (0);
// }
