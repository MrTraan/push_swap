/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 23:25:46 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 17:11:40 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int		fill_stack_b(t_stack **stack_a, t_stack **stack_b, char *flags)
{
	int		i;

	i = get_stack_size(*stack_a);
	while (i > 0 && !is_stack_ordered(*stack_a))
	{
		while (get_stack_min(*stack_a) != (*stack_a)->content)
		{
			if (get_min_index(*stack_a) > get_stack_size(*stack_a) / 2)
				op_rr(stack_a, 'a', ' ', flags);
			else
				op_r(stack_a, 'a', ' ', flags);
			if (flags[F_VERBOSE])
				print_stacks(*stack_a, *stack_b);
		}
		op_pb(stack_a, stack_b, ' ', flags);
		if (flags[F_VERBOSE])
			print_stacks(*stack_a, *stack_b);
		i--;
	}
	return (0);
}

int		empty_stack_b(t_stack **stack_a, t_stack **stack_b, char *flags)
{
	int		i;

	i = get_stack_size(*stack_b);
	while (i > 0)
	{
		i--;
		if (i > 0)
			op_pa(stack_b, stack_a, ' ', flags);
		else
			op_pa(stack_b, stack_a, '\n', flags);
		if (flags[F_VERBOSE])
			print_stacks(*stack_a, *stack_b);
	}
	return (0);
}

int		is_number_valid(char *s)
{
	if (!ft_isnumber(s))
		return (0);
	if (ft_strlen(s) > 11)
		return (0);
	if (ft_strlen(s) == 11 && ft_strcmp(s, "-2147483648") > 0)
		return (0);
	if (ft_strlen(s) == 10 && ft_strcmp(s, "2147483647") > 0)
		return (0);
	return (1);
}

int		bad_input(t_stack *stack_a)
{
	ft_putendl("Error");
	delete_stack(stack_a);
	return (1);
}

int		main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			i;
	char		flags[NB_FLAGS];

	stack_a = NULL;
	stack_b = NULL;
	i = parse_flags(ac, av, flags);
	while (i < ac)
	{
		stack_push_elem_back(&stack_a, stack_new_elem(ft_atoi(av[i])));
		if (!is_number_valid(av[i]))
			return (bad_input(stack_a));
		i++;
	}
	if (stack_has_double(stack_a))
		return (bad_input(stack_a));
	optimize_stack(&stack_a);
	fill_stack_b(&stack_a, &stack_b, flags);
	empty_stack_b(&stack_a, &stack_b, flags);
	delete_stack(stack_a);
	delete_stack(stack_b);
	return (0);
}
