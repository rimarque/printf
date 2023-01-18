/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdiu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:12:50 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/18 15:49:46 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int n, int len)
{
	while (n != 0)
	{		
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_putnbr(int  n, int len, char format)
{
	unsigned int pn;

	if (format == 'd' || format == 'i')
	{
		if (n == -2147483648)
			return (ft_putstr("-2147483648", len));
		if (n < 0)
		{
			ft_putchar('-', len);
			n = -n;
			len++;
		}
	}
	pn = n; 	
	if (pn > 9)
		ft_putnbr(pn / 10, len,'u');
	ft_putchar(pn % 10 + 48, len);
	return(len + ft_nbrlen(pn, 0));
}

int main()
{
	unsigned int	n = 2147483648;
	printf("my function(d/i):\n");
        printf("\nret value: %d\n", ft_putnbr(n, 0, 'd'));
        printf("printf function(d):\n");
        printf("\nret value: %d\n", printf("%d", n));
        printf("printf function(i):\n");
       	printf("\nret value: %i\n", printf("%i", n));
        printf("\nmy function(u):\n");
        printf("\nret value: %d\n", ft_putnbr(n, 0, 'u'));
        printf("printf function(u):\n");
        printf("\nret value: %d\n", printf("%u", n));
}

