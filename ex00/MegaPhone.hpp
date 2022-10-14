/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:09:38 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:45:10 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_H
# define MEGAPHONE_H

#include <iostream>
#include <cctype>

class	MegaPhone
{
private:
	int	i ;

public:
	MegaPhone();
	int	tocapital(char *argv) ;
};

#endif
