/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:36:51 by skock             #+#    #+#             */
/*   Updated: 2024/11/08 15:36:54 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*to;
	const unsigned char	*from;

	to = (unsigned char *)dest;
	from = (const unsigned char *)src;
	if (to < from)
	{
		i = 0;
		while (i < n)
		{
			to[i] = from[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			to[i] = from[i];
		}
	}
	return (dest);
}

/*
int main()
{
    char buffer1[50] = "Hello, World!";
    char buffer2[50] = "Goodbye, World!";
    char overlap1[50] = "1234567890";
    char overlap2[50] = "ABCDEFGHIJ";

    printf("Test 1: Copie normale (sans chevauchement)\n");
    printf("Avant: dest = '%s', src = '%s'\n", buffer1, buffer2);
    ft_memmove(buffer1, buffer2, 15);
    printf("Après: dest = '%s'\n\n", buffer1);

    printf("Test 3: Chevauchement (dest après src)\n");
    printf("Avant: '%s'\n", overlap2);
    ft_memmove(overlap2 + 3, overlap2, 7);
    printf("Après: '%s'\n\n", overlap2);
    return 0;
}*/
