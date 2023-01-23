/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_iduxXp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:51:04 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/20 17:14:27 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned long long n, int base)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n != 0)
	{		
		len++;
		n = n / base;
	}
	return (len);
}

int	ft_put_id(int  n)
{
	int len;

	if (n == -2147483648)
		return (ft_put_s("-2147483648"));
	len = 0;
	if (n < 0)
	{
		ft_put_c('-');
		n = -n;
		len++;
	}	
	if (n >= 10)
		ft_put_id(n / 10);
	ft_put_c(n % 10 + 48);
	return(len + ft_nbrlen(n, 10));
}

int	ft_put_u(unsigned int n)
{
	if (n >= 10)
		ft_put_u(n / 10);
	ft_put_c(n % 10 + 48);
	return (ft_nbrlen(n, 10));
}

int     ft_put_xX(unsigned long long n, char format)
{
        if (n >= 16)
                ft_put_xX(n / 16, format);
	if (n % 16 < 10)
		ft_put_c(n % 16 + 48);
	else
		if (format =='X')
			ft_put_c(n % 16 + 55);
		else
			ft_put_c(n % 16 + 87);
        return (ft_nbrlen(n, 16));
}

int	ft_put_p(unsigned long long p)
{
	if (p == 0)
	{
		write(1,"(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	ft_put_xX(p, 'x');
	return (2 + ft_nbrlen(p, 16));
}

/*int main()
{
	int n = 0;
	printf("FT_PUTid\nmy function(d/i):\n");
        printf("\nret value: %d\n", ft_put_id(n, 0, 'd'));
        printf("printf function(d):\n");
        printf("\nret value: %d\n", printf("%d", n));
        printf("printf function(i):\n");
       	printf("\nret value: %i\n", printf("%i", n));
        printf("\nFT_PUTuxX\nmy function(u):\n");
        printf("\nret value: %d\n", ft_put_uxX(n, 0, 'u'));
        printf("printf function(u):\n");
        printf("\nret value: %d\n", printf("%u", n));
	printf("\nmy function(x):\n");
        printf("\nret value: %d\n", ft_pu_tuxX(n, 0, 'x'));
        printf("printf function(x):\n");
        printf("\nret value: %d\n", printf("%x", n));
	printf("\nmy function(X):\n");
        printf("\nret value: %d\n", ft_put_uxX(n, 0, 'X'));
        printf("printf function(X):\n");
        printf("\nret value: %d\n", printf("%X", n));
}*/
