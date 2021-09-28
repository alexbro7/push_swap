/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebross <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:09:00 by alebross          #+#    #+#             */
/*   Updated: 2021/09/28 17:09:02 by alebross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_element
{
	int			v;
	int			l;
}				t_element;

typedef struct s_pile
{
	t_element	*p;
	int			s;
}				t_pile;

typedef struct s_op
{
	int			ra;
	int			rra;
	int			rb;
	int			rrb;
	int			rr;
	int			rrr;
	int			total;
	int			ltm;
}				t_op;

typedef struct s_obj
{
	t_pile		a;
	t_pile		b;
	t_op		op;
	int			os;
	int			cs;
	int			ic;
}				t_obj;

int				ft_error(int a, t_element *b, t_element *c);
unsigned int	ft_strlen(char *s);
void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putnbr(int n);
long int		ft_atoi(const char *str, int *i);
void			ft_putpile(t_pile a, t_pile b);
int				ft_checkdouble(t_pile a);
void			ft_ra(t_pile *p);
void			ft_rb(t_pile *p);
void			ft_rr(t_pile *a, t_pile *b);
void			ft_rra(t_pile *p);
void			ft_rrb(t_pile *p);
void			ft_rrr(t_pile *a, t_pile *b);
void			ft_sa(t_pile *p);
void			ft_sb(t_pile *p);
void			ft_ss(t_pile *a, t_pile *b);
void			ft_pa(t_pile *a, t_pile *b);
void			ft_pb(t_pile *a, t_pile *b);
int				ft_get_pos_min(t_pile p);
void			ft_min_to_summit(t_pile *a);
int				ft_is_num(char *s, int *i);
int				ft_is_space(char c);
int				ft_check_args(int ac, char **av);
int				ft_get_args(int ac, char **av, t_pile *a);
t_pile			ft_plusun(t_pile a);
int				ft_get_loc(t_pile *a);
void			ft_sort3num(t_pile *a);
t_obj			ft_first_p(t_obj o);
t_op			ft_count_op(t_obj o);
t_op			ft_init_op(void);
t_obj			ft_do_op(t_obj o);
int				ft_is_sort(t_pile a);

#endif
