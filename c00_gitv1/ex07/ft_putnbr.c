/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:23:50 by dasalaza          #+#    #+#             */
/*   Updated: 2023/08/12 20:54:48 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putchar(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putnbr_aux(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		ft_putnbr(nb);
}

/*int	main(void)
{
	int x = 11223344;
	int y = 42;
	int	max_integer = 2147483647;
	int	min_integer = -2147483648;

	ft_putnbr_aux(x);
	write(1, "\n", 1);
	ft_putnbr_aux(max_integer);
	write(1, "\n", 1);
	ft_putnbr_aux(min_integer);
	write(1, "\n", 1);
	ft_putnbr_aux(y);

	return (0);
}*/
