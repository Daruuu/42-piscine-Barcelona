/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:14:41 by dasalaza          #+#    #+#             */
/*   Updated: 2023/08/12 21:29:15 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_numbers(int nb)
{
	char	unidad;
	char	decena;

	unidad = '0';
	decena = '0';
	decena = decena + nb / 10; 
	unidad = unidad + nb % 10;
	write(1, &decena, 1);
	write(1, &unidad, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			print_numbers(num1);
			write(1, " ", 1);
			print_numbers(num2);
			if (!(num1 == 98 && num2 == 99))
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
	write(1, "\n", 1);
}
/*int	main(void)
{
	ft_print_comb2();	
}*/
