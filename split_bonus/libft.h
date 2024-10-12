/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:24:45 by alex              #+#    #+#             */
/*   Updated: 2024/10/12 11:59:25 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list // bonus part
{
	void			*content; // данные содерж в узле
	struct s_list	*next; // адрес след узла или NULL (если последний)
}	t_list;
int		count_words(const char *s, char c);
int		get_word_length(const char **s, char c);
char	*get_next_word(const char **s, char c);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);

#endif