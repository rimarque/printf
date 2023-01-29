/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_cs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:13:28 by rimarque          #+#    #+#             */
/*   Updated: 2023/01/25 17:13:42 by rimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	printf("FT_PUTCHAR:\nmy function:\n");
	printf("\nret value: %d", ft_put_c('c'));
	printf("\nprintf function:\n");
	printf("\nret value: %d", printf("%c", 'c'));
	printf("\n------------\n");
	printf("FT_PUTSTR\nmy function:\n");
	printf("ret value: %d\n", ft_put_s("ola\n"));
	printf("printf function:\n");	
	printf("ret value: %d\n", printf("%s\n", "ola"));
}
