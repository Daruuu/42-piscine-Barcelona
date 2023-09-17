/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:21:52 by dasalaza          #+#    #+#             */
/*   Updated: 2023/08/12 21:29:55 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_write(char num1, char num2, char num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (num1 != '7' || num2 != '8' || num3 != '9')
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb(void)
{
	char	num_one;
	char	num_two;
	char	num_three;

	num_one = '0';
	while (num_one <= '7')
	{
		num_two = num_one + 1;
		while (num_two <= '8')
		{
			num_three = num_two + 1;
			while (num_three <= '9')
			{
				ft_print_write(num_one, num_two, num_three);
				num_three ++;
			}
			num_two++;
		}
		num_one++;
	}
	write(1, "\n", 1);
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
