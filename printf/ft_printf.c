/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 08:59:17 by ahsalam           #+#    #+#             */
/*   Updated: 2023/06/02 20:40:30 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(const char *str, void *arg)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i = i + ft_print_char((int)arg);
	else if (*str == 's')
		i = i + ft_print_string((char *)arg);
	else if (*str == 'p')
		i = i + ft_print_pointer((unsigned long)arg, 87);
	else if (*str == 'd')
		i = i + ft_print_int((int)arg);
	else if (*str == 'i')
		i = i + ft_print_int((int)arg);
	else if (*str == 'u')
		i = i + ft_print_unsigned((unsigned int)arg);
	else if (*str == 'x')
		i = i + ft_print_hex((unsigned int)arg, 87);
	else if (*str == 'X')
		i = i + ft_print_hex((unsigned int)arg, 55);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list			arg;
	unsigned int	i;

	i = 0;
	va_start(arg, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr("cspdiuxX", *str))
				i = i + ft_type(str, va_arg(arg, void *));
			else if (*str == '%')
				i = i + ft_print_char('%');
		}
		else
			i = i + ft_print_char(*str);
		str++;
	}
	va_end(arg);
	return (i);
}

/*
#include <stdio.h>

int main()
{
    char ch = 'A';
    ft_printf("Character: %c\n", ch);
	printf("Character: %c\n", ch);

    char* str = "Hello, world!";
    ft_printf("String: %s\n", str);
	printf("String: %s\n", str);

    void* ptr = (void*)0x12345678;
    ft_printf("Pointer: %p\n", ptr);
	printf("Pointer: %p\n", ptr);

    int num = 42;
    ft_printf("Decimal: %d\n", num);
	printf("Decimal: %d\n", num);

    int i_num = -42;
    ft_printf("Integer: %i\n", i_num);
	printf("Integer: %i\n", i_num);

    unsigned int u_num = 42;
    ft_printf("Unsigned Decimal: %u\n", u_num);
	printf("Unsigned Decimal: %u\n", u_num);

    int hex_num = 255;
    ft_printf("Lowercase Hexadecimal: %x\n", hex_num);
	printf("Lowercase Hexadecimal: %x\n", hex_num);

    ft_printf("Uppercase Hexadecimal: %X\n", hex_num);
	printf("Uppercase Hexadecimal: %X\n", hex_num);

    ft_printf("Percent Sign: %%\n");
	printf("Percent Sign: %%\n");

    return 0;
}
*/