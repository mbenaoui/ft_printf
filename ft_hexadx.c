/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:22:04 by mbenaoui          #+#    #+#             */
/*   Updated: 2021/12/02 17:15:35 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadx(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb < 10)
			len += ft_putchar(nb + 48);
		else
			len += ft_putchar(nb + 55);
	}
	else if (nb > 15)
	{
		len += ft_hexadx(nb / 16);
		len += ft_hexadx(nb % 16);
	}
	return (len);
}
