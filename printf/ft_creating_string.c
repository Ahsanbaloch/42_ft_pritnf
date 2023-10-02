/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creating_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:05:10 by ahsalam           #+#    #+#             */
/*   Updated: 2023/06/01 14:26:49 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_creating_string(unsigned long val, int *i)
{
	int				j;
	char			*str;

	j = 0;
	while (val != 0)
	{
		val = val / 16;
		j++;
	}
	str = malloc((j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[j] = '\0';
	*i = j - 1;
	return (str);
}
