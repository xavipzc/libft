/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PZC <PZC@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 18:23:20 by PZC               #+#    #+#             */
/*   Updated: 2017/02/20 21:23:51 by PZC              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (!ptr || !size)
		return (NULL);
	if (!(new_ptr = ft_strnew(size)))
		return (NULL);
	ft_strcpy(new_ptr, ptr);
	return (new_ptr);
}
