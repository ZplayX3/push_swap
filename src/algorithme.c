#include "push_swap.h"
// index final doit prendre en paramètre non pas src mais sa copie
int index_final(t_stack *src, int i)
{
    int j;
	int k;

    j = 0;
	k = 0;
    while (src[j])
    {
        if (i > src[j])
			k++;
		j++;
    }
	return (k);
}

int	bit_number(t_stack *src)
{
	int	i;
	int	x;

	x = (src->len - 1;);
	i = 0;
	while (x)
	{
		x = x/2;
		i++;
	}
	return (i);
}

void	radix(t_stack *src)
{
	int	x;
	int	i;
	int	j;

	i = 0;
	x = bit_number(*src);
	while (i < x)
	{
		j = 0;
		while (j < src->len)
		{
			if (index_final(*src, src[0])>> i & 1)
				ra(*src);
			else
				pb(*src, *dest);
			j++;
		}
		while (dest)
			pa(*src, *dest);
		i++;
	}
}