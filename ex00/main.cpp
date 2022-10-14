/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:42:44 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:55:01 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MegaPhone.hpp"

int	main(int argc, char *argv[])
{
	MegaPhone	megaphone;

	if ( argc == 1 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
	else if ( argc > 1 )
		while ( ++argv && megaphone.tocapital(*argv) )
			std::cout << *argv ;
	std::cout << std::endl ;
	return (0) ;
}
