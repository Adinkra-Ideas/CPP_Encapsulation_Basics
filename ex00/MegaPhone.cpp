/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:56:20 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:50:09 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MegaPhone.hpp"

MegaPhone::MegaPhone()
{
}

int	MegaPhone::tocapital(char *argv)
{
	i = 0;	
	if ( ! argv )
		return (0) ;
	while ( argv[i] )
	{
		if ( std::islower(static_cast<unsigned char>(argv[i])) )
			argv[i] = (char) std::toupper(static_cast<unsigned char>(argv[i])) ;
		i++ ;	
	}
	return (1) ;
}
