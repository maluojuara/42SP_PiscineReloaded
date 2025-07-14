/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:41:43 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/10 18:50:27 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <stdio.h>

// void print_num(int n)
// {
//     printf("abc %d\n", n);
// }

// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5};

//     ft_foreach(arr, 5, print_num);
//     return 0;
// }