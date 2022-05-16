/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:16:36 by mbenaoui          #+#    #+#             */
/*   Updated: 2021/12/02 19:36:54 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_badboy(unsigned long int nb)
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
		len += ft_badboy(nb / 16);
		len += ft_badboy(nb % 16);
	}
	return (len);
}

int	ft_p(unsigned long int nb)
{
	int	i;

	i = 0;
	i += ft_pustr("0x");
	i += ft_badboy(nb);
	return (i);
}
