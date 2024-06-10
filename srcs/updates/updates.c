/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   updates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:38:19 by lgosselk          #+#    #+#             */
/*   Updated: 2024/02/26 13:10:25 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	update_for_next_line(t_base *base)
{
	update_last_arg(base, ft_last_token(base->first_token));
	update_exit_status(base, NULL);
}
