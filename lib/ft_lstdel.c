/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:00:15 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/19 09:32:51 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		next = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free((*alst));
		(*alst) = next;
	}
	(*alst) = NULL;
}
