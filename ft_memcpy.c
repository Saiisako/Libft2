/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:36:40 by skock             #+#    #+#             */
/*   Updated: 2024/11/11 13:01:32 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str_dest;
	const unsigned char	*str_src;
	size_t				i;

	str_src = (const unsigned char *)src;
	str_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char dest[11] = "Hi";
// 	char src[11] = "HelloWorld";

// 	printf("%s\n", dest);
// 	memcpy(dest, src, 2);
// 	printf("%s\n", dest);
// 	return 0;
// }
