/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:36:06 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/10 14:38:53 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	res = nb * ft_recursive_factorial(nb -1);
	return (res);
}
// #include <stdio.h>

// int	main (void)
// {
// 	printf("%d", ft_recursive_factorial(-1));
// }