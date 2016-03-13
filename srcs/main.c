/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 23:25:46 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 01:09:34 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			i;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < ac)
	{
		stack_push_elem_back(&stack_a, stack_new_elem(ft_atoi(av[i])));
		i++;
	}
	//put_stack(stack_a);
	i = get_stack_size(stack_a);
	while (i > 0)
	{
		while (get_stack_min(stack_a) != stack_a->content)
		{
			ft_putstr("ra ");
			op_r(&stack_a);
		}
		op_p(&stack_a, &stack_b);
		ft_putstr("pb ");
		i--;
	}
	i = get_stack_size(stack_b);
	while (i > 0)
	{
		op_p(&stack_b, &stack_a);
		i--;
		if (i > 0)
			ft_putstr("pa ");
		else
			ft_putstr("pa\n");
	}
	//ft_putendl("\n========\n");
	//put_stack(stack_a);
	//ft_putendl("\n========\n");
	//put_stack(stack_b);
}
