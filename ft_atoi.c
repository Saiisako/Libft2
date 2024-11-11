/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:35:39 by skock             #+#    #+#             */
/*   Updated: 2024/11/08 15:35:42 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_iswhitespace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
// int	main(void)
// {
// 	char	str[] = "--90abc12";
// 	int		result;
// 	int		result2;

// 	puts("voici str avant atoi ");
// 	puts(str);

// 	result = ft_atoi(str);
// 	result2 = atoi(str);

// 	printf("%d\n%d\n", result, result2);

// 	return 0;
// }