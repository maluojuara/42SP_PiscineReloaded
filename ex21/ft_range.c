/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:28:58 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/10 17:36:17 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*out;
	int	i;

	i = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	out = malloc(len * sizeof(int));
	if (!out)
		return (NULL);
	while (i < len)
	{
		out[i] = min;
		i++;
		min++;
	}
	return (out);
}

// #include <stdio.h>

// int	main (void)
// {
// 	int *range = ft_range(2, 20);

// 	while (*range < 20)
// 	{
// 		printf("%i, ", *range);
// 		range++;
// 	}
// 	return (0);
// }
