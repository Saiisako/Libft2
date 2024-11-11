/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:35:47 by skock             #+#    #+#             */
/*   Updated: 2024/11/08 15:35:50 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*ptr;
	size_t		i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*ptr++ = '\0';
		i++;
	}
}

/*
int main()
{
    int	i;
    char buffer[7] = "Salut !";

    printf("Before : '%s'\n", buffer);
    bzero(buffer, sizeof(buffer));
    printf("After : ");
	i = 0;
	while (i < sizeof(buffer))
	{
		if (buffer[i] == '\0')
		{
        	printf(".");
			i++;
		}
		 else
		{
            printf("%c", buffer[i]);
        }
    }
    return 0;
}
*/
