/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 23:23:14 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 17:06:52 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <libft.h>
# include <stdlib.h>
# include <unistd.h>
# define VALID_FLAGS	"vc"
# define NB_FLAGS		2
# define F_VERBOSE		0
# define F_COLOR		1

typedef struct		s_stack
{
	int				content;
	struct s_stack	*previous;
	struct s_stack	*next;
}					t_stack;

t_stack				*stack_new_elem(int a);
void				stack_push_elem_front(t_stack **head, t_stack *new);
t_stack				*stack_pop_elem_front(t_stack **head);
void				stack_push_elem_back(t_stack **head, t_stack *new);
t_stack				*stack_pop_elem_back(t_stack **head);
void				put_stack(t_stack *elem);
int					op_s(t_stack **s, char c1, char c2, char *flags);
int					op_pa(t_stack **from, t_stack **to, char c2, char *flags);
int					op_pb(t_stack **from, t_stack **to, char c2, char *flags);
int					op_r(t_stack **s, char c1, char c2, char *flags);
int					op_rr(t_stack **s, char c1, char c2, char *flags);
int					get_stack_size(t_stack *s);
int					get_stack_min(t_stack *s);
int					get_stack_max(t_stack *s);
int					get_min_index(t_stack *s);
int					is_stack_ordered(t_stack *s);
int					parse_flags(int ac, char **av, char *flags);
void				delete_stack(t_stack *head);
int					stack_has_double(t_stack *s);
void				print_stacks(t_stack *stack_a, t_stack *stack_b);

#endif
