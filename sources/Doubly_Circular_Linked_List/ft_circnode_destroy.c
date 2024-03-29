/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circnode_destroy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:47:02 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/25 09:41:09 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_circ_list.h"

void	ft_circnode_destroy(t_circnode **cnode_ref)
{
	t_circnode	*cnode;

	cnode = *cnode_ref;
	free(cnode);
	*cnode_ref = NULL;
}
