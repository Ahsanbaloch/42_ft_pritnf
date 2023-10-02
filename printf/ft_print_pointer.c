/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:00:58 by ahsalam           #+#    #+#             */
/*   Updated: 2023/06/01 17:32:03 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long val, int i)
{
	int				j;
	char			*str;
	unsigned long	temp;

	j = 0;
	temp = val;
	str = ft_creating_string(temp, &j);
	if (!str)
		return (0);
	while (temp != 0 && j >= 0)
	{
		if ((temp % 16) < 10)
			str[j] = (temp % 16) + '0';
		else
			str[j] = (temp % 16) + i;
		temp = temp / 16;
		j--;
	}
	j = ft_strlen(str);
	j += ft_print_string("0x");
	ft_putstr_fd(str, 1);
	free(str);
	if (val == 0)
		j += ft_print_char('0');
	return (j);
}
