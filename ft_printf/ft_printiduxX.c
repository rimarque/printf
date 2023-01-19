/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printiduxX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:51:04 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/19 17:01:31 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int n, int len, char format)
{
	int base;

	if (format == 'x' || format == 'X' || format == 'p')
		base = 16;
      	else
		base = 10;	
	while (n != 0)
	{		
		len++;
		n = n / base;
	}
	return (len);
}

int	ft_putid(int  n, int len, char format)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648", len));
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
		len++;
	}	
	if (n >= 10)
		ft_putid(n / 10, len,'u');
	ft_putchar(n % 10 + 48, len);
	return(len + ft_nbrlen(n, 0, format));
}

int	ft_putuxX(unsigned int n, int len, char format)
{
	unsigned int base;

	if (format == 'u')
		base = 10;
	else
		base = 16;
	if (n >= base)
		ft_putuxX(n / base, len, format);
	if (format == 'u')
		ft_putchar(n % base + 48, len);
	else
	{
		if (n % base < 10)
                	ft_putchar(n % base + 48, len);
        	else
        	{		
                	if (format =='X')
                        	ft_putchar (n % base + 55, len);
                	else
                        	ft_putchar (n % base + 87, len);
       	 	}
	}	
	return (ft_nbrlen(n, len, format));
}

int	putp(unsigned long long p, int len)
{
	write (1, "Ox", 2);
	len = ft_putuxX(p, len,'x');
	return (2 + len);
}

int main()
{
	int	n = -214748;
	void *p;
	printf("FT_PUTid\nmy function(d/i):\n");
        printf("\nret value: %d\n", ft_putid(n, 0, 'd'));
        printf("printf function(d):\n");
        printf("\nret value: %d\n", printf("%d", n));
        printf("printf function(i):\n");
       	printf("\nret value: %i\n", printf("%i", n));
        printf("\nFT_PUTuxX\nmy function(u):\n");
        printf("\nret value: %d\n", ft_putuxX(n, 0, 'u'));
        printf("printf function(u):\n");
        printf("\nret value: %d\n", printf("%u", n));
	printf("\nmy function(x):\n");
        printf("\nret value: %d\n", ft_putuxX(n, 0, 'x'));
        printf("printf function(x):\n");
        printf("\nret value: %d\n", printf("%x", n));
	printf("\nmy function(X):\n");
        printf("\nret value: %d\n", ft_putuxX(n, 0, 'X'));
        printf("printf function(X):\n");
        printf("\nret value: %d\n", printf("%X", n));
	printf("\nFT_PUTp\nmy function(p):\n");
        printf("\nret value: %d\n", ft_putp(p, 0));
        printf("printf function(p):\n");
        printf("\nret value: %d\n", printf("%p", p));

}

