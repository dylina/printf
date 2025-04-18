/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgorceac <dgorceac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:21:43 by dgorceac          #+#    #+#             */
/*   Updated: 2025/04/18 13:34:18 by dgorceac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	check_format(const char *str, void *arg)
{

}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	count;
	va_list args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (str[i] == '%')
		{

		}
	}
	va_arg(args, char *);

	va_end(args);
	return (count);
}
