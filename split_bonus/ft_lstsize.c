/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:03:05 by alex              #+#    #+#             */
/*   Updated: 2024/10/12 12:35:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* void	ft_create_list(t_list *node1, t_list *node2, t_list *node3)
{
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
}
int main()
{
	int *value1 = malloc(sizeof(int));
	*value1 = 1;
	t_list *node1 = ft_lstnew(value1); // создаем первый элемент

	int *value2 = malloc(sizeof(int));
	*value2 = 2;
	t_list *node2 = ft_lstnew(value2);

	int *value3 = malloc(sizeof(int));
	*value3 = 5;
	t_list *node3 = ft_lstnew(value3);

	ft_create_list(node1, node2, node3);
	
	printf("%d\n", ft_lstsize(node1));
} */