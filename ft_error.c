/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 06:20:07 by vde-frei          #+#    #+#             */
/*   Updated: 2023/10/12 07:44:09 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_error(char *s)
{
	if (errno)
		perror("Error");
	else
		ft_putendl_fd(s, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
