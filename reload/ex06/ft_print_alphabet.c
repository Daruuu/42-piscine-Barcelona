
#include <unistd.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
  char	a;
  char	z;

  a = 'a';
  z = 'z';
  while (a <= z)
	ft_putchar(a++);
}
/*
int	main(void)
{
  ft_print_alphabet();

  return (0);
}
*/
