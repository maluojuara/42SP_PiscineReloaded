/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcosta <malcosta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:21:55 by malcosta          #+#    #+#             */
/*   Updated: 2025/07/10 17:28:13 by malcosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>

// int	main (void)
// {
// 	char	*str = "abcdefghijklmnopqrst%^&*()";
// 	char	*copy_str = "";
// 	printf("string antes da dup: %s\n", copy_str);
// 	copy_str = ft_strdup(str);
// 	printf("string depois: %s\n", copy_str);
// 	return (0);	
// } 