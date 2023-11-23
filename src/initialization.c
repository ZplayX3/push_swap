#include "push_swap.h"

t_stack	*fill_stack(int ac, char **av)
{
	t_stack	*stack_a;
	long int	nb;
	int	i;

	stack_a = NULL;
	nb = 0;
	i = 1;
	while(i < ac)
	{
		nb = ft_atoi(av[i]);
		if (nb > 2147483647 || nb < -2147483648)
			exit_error(&stack_a, NULL);
		if (i == 1)
			stack_a = create_stack((int)nb);
		else
			stack_add(&stack_a, create_stack((int)nb));
		i++;
	}
	return (stack_a);
}
