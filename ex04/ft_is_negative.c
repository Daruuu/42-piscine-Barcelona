/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:18:52 by dasalaza          #+#    #+#             */
/*   Updated: 2023/08/12 21:30:12 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 5;
	num2 = -111;
	ft_is_negative(num1);
	write(1, "\n", 1);
	ft_is_negative(num2);
	return (0);
}*/
