/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:26:37 by euyi              #+#    #+#             */
/*   Updated: 2022/10/03 20:34:53 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	cmd;

	std::cout << "My Awesome PhoneBook!" << std::endl;
	std::getline(std::cin, cmd);
	while ( cmd.compare(0, cmd.length(), "EXIT\0") )
	{
		if ( !cmd.compare(0, cmd.length(), "ADD\0") )
			phonebook.add_contact();
		else if ( !cmd.compare(0, cmd.length(), "SEARCH\0") )
			phonebook.display_summary();
		std::cout << "My Awesome PhoneBook!" << std::endl;
		std::getline(std::cin, cmd);
	}
	if ( !cmd.compare(0, cmd.length(), "EXIT\0") )
		phonebook.free_mem();
	return (0);
}
