/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrasset <ngrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 23:23:14 by ngrasset          #+#    #+#             */
/*   Updated: 2016/03/13 00:56:06 by ngrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <libft.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct 		s_stack
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
int					op_s(t_stack **s);
int					op_p(t_stack **from, t_stack **to);
int					op_r(t_stack **s);
int					op_rr(t_stack **s);
int					get_stack_size(t_stack *s);
int					get_stack_min(t_stack *s);
int					get_stack_max(t_stack *s);

#endif