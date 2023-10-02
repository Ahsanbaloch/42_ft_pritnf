/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:08:24 by ahsalam           #+#    #+#             */
/*   Updated: 2023/06/01 17:33:42 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int val, int i)
{
	unsigned int	temp;
	char			*str;
	int				j;
	int				*k;

	k = &j;
	temp = val;
	str = ft_creating_string(val, k);
	if (!str)
		return (0);
	while (temp != 0)
	{
		if ((temp % 16) < 10)
			str[j] = (temp % 16) + '0';
		else
			str[j] = (temp % 16) + i;
		temp = temp / 16;
		j--;
	}
	ft_putstr_fd(str, 1);
	j = ft_strlen(str);
	free(str);
	if (val == 0)
		j = j + ft_print_char('0');
	return (j);
}
