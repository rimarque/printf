/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_iduxXp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:12:07 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/25 17:12:20 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	int n = -344;
	printf("FT_PUTid\nmy function(d/i):\n");
        printf("\nret value: %d\n", ft_put_id(n));
        printf("printf function(d):\n");
        printf("\nret value: %d\n", printf("%d", n));
        printf("printf function(i):\n");
        printf("\nret value: %i\n", printf("%i", n));
        printf("\nFT_PUTuxX\nmy function(u):\n");
        printf("\nret value: %d\n", ft_put_u(n));
        printf("printf function(u):\n");
        printf("\nret value: %d\n", printf("%u", n));
	printf("\nmy function(x):\n");
        printf("\nret value: %d\n", ft_put_x(n, 'x'));
        printf("printf function(x):\n");
        printf("\nret value: %d\n", printf("%x", n));
	printf("\nmy function(X):\n");
        printf("\nret value: %d\n", ft_put_x(n, 'X'));
        printf("printf function(X):\n");
        printf("\nret value: %d\n", printf("%X", n));
}
