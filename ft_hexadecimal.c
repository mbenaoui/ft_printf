/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:24:22 by mbenaoui          #+#    #+#             */
/*   Updated: 2021/12/02 16:11:40 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb < 10)
			len += ft_putchar(nb + 48);
		else
			len += ft_putchar(nb + 87);
	}
	else if (nb > 15)
	{
		len += ft_hexadecimal(nb / 16);
		len += ft_hexadecimal(nb % 16);
	}
	return (len);
}
