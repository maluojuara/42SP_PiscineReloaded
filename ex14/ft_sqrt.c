/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:40:48 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/10 14:49:39 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	prime;
	int	sub;

	prime = 1;
	sub = 0;
	if (nb <= 0)
		return (0);
	while (nb - prime >= 0)
	{
		sub++;
		if (sub * sub == nb)
			return (sub);
		prime += 2;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_sqrt(2));
// }